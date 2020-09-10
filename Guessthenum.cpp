#include <iostream>
using namespace std;
int main() {
  int secretNum=0;
  int guess;
  int guessNum=0;
  int guesslimit=4;
  bool outofGuesses= false;
  while(secretNum != guess && !outofGuesses){
    cout<< "Guess the number ";

    cin >> guess;
    guessNum++;
    if(guessNum < guesslimit){
      if(secretNum != guess){

        cout << "Wrong Guess" << endl;
  }
      else{
        outofGuesses=true;
        cout << "You guessed it right!"<< endl;
  }
  if(outofGuesses){
    cout<<"Youlose!";

  }
  else{
    cout<<"You win!";
  }

  }
  
    
    
  }
  
  return 0;
}