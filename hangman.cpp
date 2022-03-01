

#include"list.h"
#include"func.h"
using namespace std;

/*
string choose_word()

void render_game(string guessed_word, int bad_Guess)

bool contain(string secret_word, char guess)

string Update(string secret_word, string guessed_word, char guess)

void play()
*/


int main()
{
   bool gameloop =false;
   while(!gameloop)
   {
       play();
       cout<<"do you want to play again (1/0): "<<endl;
       cout<<"0-yes; 1-no"<<endl;


       cin>>gameloop;
       system("cls");


   }





    return 0;
}

