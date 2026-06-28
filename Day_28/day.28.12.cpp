#include<iostream>
#include<string>
#include<vector>
using namespace std;

struct Account{
    int accNo;
    string holdername;
    float balance;
};
int main(){
    vector<Account> bankdatabase;
    int choice;
    do{
        cout << "\n BANK ACCOUNT SYSTEM " << endl;
        cout << "1. Open new account" << endl;
        cout << "2. Display all accounts " << endl;
        cout << "3. Deposit Money " << endl;
        cout << "4. Withdraw money   " << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch(choice){
            case 1: {
                Account temp;
                cout << "Enter new account number: ";
                cin >> temp.accNo;
                cin.ignore();
                cout << "Enter account holder name: ";
                getline(cin,temp.holdername);
                cout << "Enter initial deposit ammount: ";
                cin >> temp.balance;
                
                bankdatabase.push_back(temp);
                cout << "Account registered successfully " << endl;
                break;
            }
            case 2:{
                if(bankdatabase.size() == 0){
                    cout << "No active account found in the system." << endl;
                }else{
                    cout << " ACTIVE ACCOUNT DETAILS " << endl;
                    for(int i = 0 ; i < bankdatabase.size() ; i++){
                        cout << "Acc No : " << bankdatabase[i].accNo
                             << " | Holder : " << bankdatabase[i].holdername
                             << " | Balance :" << bankdatabase[i].balance;
                    }
                }
                break;
            }
            case 3:{
                if(bankdatabase.size() == 0 ){
                    cout << "No record found" << endl;
                }else{
                    int searchacc;
                    cout << "Enter account number for deposit : ";
                    cin >> searchacc;
                    int foundindex = -1;
                    for(int i = 0; i < bankdatabase.size(); i++){
                        if(bankdatabase[i].accNo == searchacc){
                            foundindex = i;
                            break;
                        }
                    }
                    if(foundindex != -1){
                        float amt;
                        cout << "Enter ammount to deposit: ";
                        cin >> amt;
                        if(amt > 0){
                            bankdatabase[foundindex].balance += amt;
                            cout <<"successfully deposted Rs" << amt <<endl;
                            cout << "updated Balance : Rs" << bankdatabase[foundindex].balance << endl;
                        }else{ 
                            cout << "Invalid deposit amount requested" << endl;
                        }
                    }else{
                    cout << "No account available with this number" << endl;
                    }
                }
                break;
            }
            case 4: {
                if(bankdatabase.size() == 0){
                    cout << "No record found" << endl;
                }else{
                    int searchacc;
                    cout << "Enter account number for withdrawal: ";
                    cin >> searchacc;

                    int foundindex = -1;
                    for( int i = 0;i < bankdatabase.size(); i++){
                        if(bankdatabase[i].accNo == searchacc){
                            foundindex = i;
                            break;
                        }
                    }
                   if(foundindex != -1){
                    float amt;
                    cout << "Enter amount to withdraw: ";
                    cin >> amt;
                    if(amt <=0){
                        cout << "Invalid input" << endl;
                    }else if(amt > bankdatabase[foundindex].balance){
                        cout << "insufficient balance" << endl;
                        cout << "Available balance: Rs" << bankdatabase[foundindex].balance << endl;
                    }else{
                        bankdatabase[foundindex].balance -= amt;
                        cout << "successfully withdraw Rs " << amt << endl;
                        cout << "Remaining balance: Rs " << bankdatabase[foundindex].balance<< endl;
                    }
                   }else{
                    cout << "No account available for this number" << endl;
                     }
                }
                 break;
            }
            case 5: {
                    cout << "closing the system" <<endl;
                    break;
                }
                default:
                    cout <<"Invalid choice" << endl;
            }
        }while(choice != 5);
        return 0;
}
