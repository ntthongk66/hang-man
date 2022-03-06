#ifndef _FUNC_H
#define _FUNC_H

    #include<iostream>
    #include<time.h>
    #include<cctype>
    using namespace std;


        string choose_word( int level)
        {
            srand(time(NULL));
            if(level == 1)
            {
                int random_word_index=rand()%total_words_normal;
                return WORD_LIST_normal[random_word_index];
            }
            else
            {
                int random_word_index = rand()%total_words_hard;
                return WORD_LIST_hard[random_word_index];
            }

        }

        char choose_guess()
        {
            char guess;
            cin>>guess;
            if(guess>='A'&& guess<='Z') return guess + 32;
            return guess;

        }



        void render_game(string guessed_word, int bad_Guess, string used_words)
        {

            cout<<FIGURE[bad_Guess]<<endl;
            cout<<'\n'<<used_words<<endl;

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


        void Update(const string &secret_word, string& guessed_word, char guess, string& used_words)
        {
            int n= secret_word.length();
            bool check = true;
            for(int i=0;i<n;i++)
            {
                if(secret_word[i]==guess)
                {
                    guessed_word[i]=guess;
                    check =false;
                }
            }
            if(check)
            {
                used_words += guess;

            }

        }

        void play()
    {

    int level;
    cout<<"choose your level \n 1 - normal \n 2 - hard \n";
    cin >> level;
    system("cls");
    string secret_word = choose_word(level);
    string guessed_word = string(secret_word.length(), '-');
    string used_words = "";

    const int MAX_BAD_GUESSES =7;
    int bad_guess_count = 0;


    do
        {
                render_game(guessed_word, bad_guess_count, used_words);
                char guess = choose_guess();


                if(contain(secret_word,guess))
                {
                    Update(secret_word,guessed_word, guess, used_words);

                }
                else bad_guess_count++;
                    system("cls");

        }while(secret_word != guessed_word && bad_guess_count < MAX_BAD_GUESSES);

        render_game(guessed_word, bad_guess_count, used_words);

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

