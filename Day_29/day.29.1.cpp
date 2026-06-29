#include<iostream>
using namespace std;
int main(){
    int choice;
    float n1,n2;
    do {
        cout << " \n MENU DRIVEN CALCULATOR "<< endl;
        cout << "1. Addition (+)" << endl;
        cout << "2. Subtraction (-)" << endl;
        cout << "3. Multiplication(*)" <<endl;
        cout << "4. Divition(/)" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if(choice >= 1 && choice <= 4){
            cout << "Enter first number: ";
            cin >> n1;
            cout << "Enter second number: ";
            cin >>n2;
        }
        switch(choice){
            case 1:
                cout <<"Answer: " << n1 << "+" << n2 << " = " << (n1 + n2) <<endl;
                break;
            
            case 2:
                cout <<"Answer: " << n1 << "-" << n2 << " = " << (n1 - n2) <<endl;
                break;
            
            case 3:
                cout <<"Answer: " << n1 << "*" << n2 << " = " << (n1 * n2) <<endl;
                break;
            
            case 4:
                if(n2 == 0){
                    cout << "division by zero is not allowed" << endl;
                }else{
                    cout <<"Answer: " << n1 << "/" << n2 << " = " << (n1 / n2) <<endl;
                }
                break;
            
            case 5:
                cout <<" Exiting the calculator"<< endl;
                break;
            default:
                cout << "Invalid choice" << endl;
        }
    }while(choice != 5);
    return 0;
}