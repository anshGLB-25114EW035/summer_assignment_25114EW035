#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    int choice;
    string mainstr;
    do {
        cout << " \n MENU DRIVEN STRING OPERATION"<< endl;
        cout << "1. Enter main string" << endl;
        cout << "2. Display string length" << endl;
        cout << "3. Reverse the string" <<endl;
        cout << "4. concatenate another string" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice){
            case 1:{
                cin.ignore();
                cout << "Enter a string: ";
                getline(cin,mainstr);
                cout << "String saved" << endl;
                break;
            }
            
            case 2:{
                if(mainstr.empty()){
                    cout<< "The string is empty" << endl;
                }else{
                    cout << "The string " << mainstr <<" has length of "<< mainstr.length() << endl; 
                }
                break;
            }
            
            case 3: {
                if(mainstr.empty()){
                    cout << "The string is empty" << endl;
                }else{
                    string tempstr = mainstr;
                    reverse(tempstr.begin(),tempstr.end());
                    cout << "original string: " << mainstr << endl;
                    cout << "reversed string: " << tempstr << endl;
                }
                break;
            }
            
            case 4:{
                if(mainstr.empty()){
                    cout << "The string is empty" << endl;
                }else{
                    string secondstr;
                    cin.ignore();
                    cout << "Enter string to add to the end: ";
                    getline(cin,secondstr);
                    mainstr = mainstr + secondstr;
                    cout << "string joined successfully" << endl;
                    cout << "updated main string is : "<< mainstr << endl;
                }
                break;
            }
            case 5:
                cout <<" Exiting the string operation system"<< endl;
                break;
            default:
                cout << "Invalid choice" << endl;
        }
    }while(choice != 5);
    return 0;
}