#ifndef _FUNC_H
#define _FUNC_H

    #include<iostream>
    #include<time.h>
    using namespace std;


        string choose_word()
        {
            srand(time(NULL));
            int random_word_index=rand()%total_words;
            return WORD_LIST[random_word_index];

        }



        void render_game(string guessed_word, int bad_Guess)
        {

            cout<<FIGURE[bad_Guess]<<endl;
            std::cout<< guessed_word<<std::endl;
        }

        bool contain(string secret_word, char guess)
        {
            for(int i=0;i<secret_word.length();i++)
            {
                if(secret_word[i] == guess)
                {
                    return true;
                    break;
                }
            }
            return false;

        }

        string Update(string secret_word, string guessed_word, char guess)
        {
            int n= secret_word.length();
            for(int i=0;i<n;i++)
            {
                if(secret_word[i]==guess)
                {
                    guessed_word[i]=guess;
                }
            }
            return guessed_word;
        }

        void play()
{

    string secret_word = choose_word();
    string guessed_word = string(secret_word.length(), '-');
    const int MAX_BAD_GUESSES =7;
    int bad_guess_count = 0;


    do
        {
             render_game(guessed_word, bad_guess_count);
             char guess ;
             std::cin >> guess;
             if(contain(secret_word,guess))
             {
                guessed_word= Update(secret_word,guessed_word, guess);

             }
             else bad_guess_count++;
             system("cls");

        }while(secret_word != guessed_word && bad_guess_count < MAX_BAD_GUESSES);

        render_game(guessed_word, bad_guess_count);

        if(bad_guess_count<MAX_BAD_GUESSES)

        {
            cout<<"oh no, you won :( \n";
            cout<<"Congratulation"<<endl;
        }
        else{
        cout<<"haaaaa,  loserrr \n";
        cout<<"the answer isssss: "<<secret_word<<endl;
        }
}


#endif // _FUNC_H

