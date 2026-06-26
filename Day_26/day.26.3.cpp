#include<iostream>
using namespace std;
int main(){
    int balance = 2000;
    int defaultpin = 2233;
    int pin ;
    int attempts = 0 ;
    cout << " WLCOME TO THE STATE BANK OF INDIA " << endl;
    while(attempts < 3){
        cout << "Please enter your pin : ";
        cin >> pin;
        if(pin == defaultpin){
            break;
        }else{
            attempts++;
            cout <<" you have entered invalid pin please enter again, attempts remaining : " << (3 - attempts) <<endl;
        }
    }
    if(attempts == 3){
        cout << "\n Too many incorrect attempts ,Your card has been blocked."<<endl;
        return 0;
    }
    int choice;
    do{
        cout << " ATM MENU " << endl;
        cout << "1. Check Balance " << endl;
        cout << "1. Deposit Money" << endl;
        cout << "2. Withdraw Money" << endl;
        cout << "4. Exis ATM  " << endl;
        cout << "Enter your choice(1-4):";
        cin>> choice;
        int amount ;
        switch(choice){
            case 1:
                cout << "\n current Balance : " << balance << endl;
                break;
            case 2:
                cout << "\n Enter deposit amount : ";
                cin >> amount;
                if(amount > 0){
                    balance += amount;
                    cout << amount  <<"deposited successfully"<<endl;
                    cout <<" New Balance : " <<balance << endl; 
                } else{
                    cout << " Invalid amount " <<endl;
                }
                break;
            case 3:
                cout <<" \n Enter withdrawal amount : ";
                cin >> amount;
                if(amount > balance){
                    cout << "Insufficient Balance! " << endl;
                    cout << "your current balance is :" << balance << endl;
                }else if(amount <= 0){
                    cout << "Invalid input ";
                }else{
                    balance -= amount;
                    cout << "please collect your cash: " << amount << endl;
                    cout << "Remaining Balance: " << balance << endl;
                }
                break;
            case 4:
                cout << "\n Thankyou for using SBI ATM " << endl;
                break;
            default:
                cout << "Invalid choice , please select again :"<<endl;
        }
    }while(choice != 4);
    return 0;
}