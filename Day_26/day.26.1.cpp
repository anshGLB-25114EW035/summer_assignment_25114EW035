#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
    srand(time(0));
    int number = rand() % 100 + 1;
    int userguess = 0;
    int attempts = 0;
    cout << " ## WELCOME TO THE NUMBER GUESSING GAME ##" <<endl;
    cout << "I have choosen a number between 1 and 100." << endl;
    cout << "Can you guess what it is ?" << endl;
    do {
        cout << "Enter your guess: ";
        cin >> userguess;
        attempts++;
        if(userguess > number){
            cout << "Too high! Try a lower number\n "<< endl;
        }
        else if(userguess < number){
            cout << "Too low! Try a higher number \n" <<endl;
        }
        else {
            cout << "CONGRATULATIONS, Yoou guessed the right number."<<endl;
            cout << "The secret number was : " << number << endl;
            cout << "Total attempts taken: " << attempts << endl; 
        }
    }
    while(userguess != number);
    return 0;
}