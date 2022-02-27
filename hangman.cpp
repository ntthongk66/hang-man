#include<iostream>
#include<time.h>
using namespace std;


const string WORD_LIST[] = {"angle", "ant", "apple", "arch", "arm", "army",
 "baby", "bag", "ball", "band", "basin", "basket", "bath", "bed", "bee", "bell", "berry",
 "bird", "blade", "board", "boat", "bone", "book", "boot", "bottle", "box", "boy",
 "brain", "brake", "branch", "brick", "bridge", "brush", "bucket", "bulb", "button",
 "cake", "camera", "card", "cart", "carriage", "cat", "chain", "cheese", "chest",
 "chin", "church", "circle", "clock", "cloud", "coat", "collar", "comb", "cord",
 "cow", "cup", "curtain", "cushion",
 "dog", "door", "drain", "drawer", "dress", "drop", "ear", "egg", "engine", "eye",
 "face", "farm", "feather", "finger", "fish", "flag", "floor", "fly",
 "foot", "fork", "fowl", "frame", "garden", "girl", "glove", "goat", "gun",
 "hair", "hammer", "hand", "hat", "head", "heart", "hook", "horn", "horse",
 "hospital", "house", "island", "jewel", "kettle", "key", "knee", "knife", "knot",
 "leaf", "leg", "library", "line", "lip", "lock",
 "map", "match", "monkey", "moon", "mouth", "muscle",
 "nail", "neck", "needle", "nerve", "net", "nose", "nut",
 "office", "orange", "oven", "parcel", "pen", "pencil", "picture", "pig", "pin",
 "pipe", "plane", "plate", "plow", "pocket", "pot", "potato", "prison", "pump",
 "rail", "rat", "receipt", "ring", "rod", "roof", "root",
 "sail", "school", "scissors", "screw", "seed", "sheep", "shelf", "ship", "shirt",
 "shoe", "skin", "skirt", "snake", "sock", "spade", "sponge", "spoon", "spring",
 "square", "stamp", "star", "station", "stem", "stick", "stocking", "stomach",
 "store", "street", "sun", "table", "tail", "thread", "throat", "thumb", "ticket",
 "toe", "tongue", "tooth", "town", "train", "tray", "tree", "trousers", "umbrella",
 "wall", "watch", "wheel", "whip", "whistle", "window", "wire", "wing", "worm",
 };

const string FIGURE[] = {
 " ------------- \n"
 " | \n"
 " | \n"
 " | \n"
 " | \n"
 " | \n"
 " ----- \n",
 " -------------  \n"
 " |           |  \n"
 " | \n"
 " | \n"
 " | \n"
 " | \n"
 " ----- \n",
 " -------------   \n"
 " |            |  \n"
 " |            O  \n"
 " | \n"
 " | \n"
 " | \n"
 " ----- \n",
 " -------------   \n"
 " |            |  \n"
 " |            O  \n"
 " |            |  \n"
 " | \n"
 " | \n"
 " ----- \n",
 " -------------   \n"
 " |            |  \n"
 " |            O  \n"
 " |           /|  \n"
 " | \n"
 " | \n"
 " ----- \n",
 " -------------    \n"
 " |            |   \n"
 " |            O   \n"
 " |           /|\\ \n"
 " | \n"
 " | \n"
 " ----- \n",
 " -------------   \n"
 " |            |  \n"
 " |            O   \n"
 " |           /|\\  \n"
 " |           /     \n"
 " | \n"
 " ----- \n",
 " -------------   \n"
 " |            |  \n"
 " |            O   \n"
 " |           /|\\ \n"
 " |           / \\  \n"
 " | \n"
 " ----- \n",

};

string choose_word()
{
    int total_words=sizeof(WORD_LIST)/sizeof(WORD_LIST[0]);
    srand(time(NULL));
    int random_word_index=rand()%total_words;
    return WORD_LIST[random_word_index];

}



void render_game(string guessed_word, int bad_Guess)
{

    cout<<FIGURE[bad_Guess]<<endl;
    std::cout<< guessed_word<<std::endl;
    //std::cout<<"Number of wrong guesses: "<<bad_Guess<<std::endl;


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

int main()
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

        }while(secret_word!=guessed_word && bad_guess_count < MAX_BAD_GUESSES);

        render_game(guessed_word, bad_guess_count);

        if(bad_guess_count<MAX_BAD_GUESSES)

        {
            cout<<"oh f*cking shitt, you won :( \n";
            cout<<"Congratulation"<<endl;
        }
        else{
        cout<<"haaaaa,  loserrr \n";
        cout<<"the answer isssss: "<<secret_word;
        }


    return 0;
}

