#include<iostream>
#include<string>
#include<vector>
using namespace std;

struct Contact{
    string name;
    string phoneNum;
    string email;
};
int main(){
    vector<Contact> phonebook;
    int choice;
    do{
        cout << "\n CONTACT MANAGEMENT SYSTEM  " << endl;
        cout << "1. Add new contact" << endl;
        cout << "2. Display all contacts " << endl;
        cout << "3. search contact by name " << endl;
        cout << "4. Delete a contact " << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch(choice){
            case 1: {
                Contact temp;
                cin.ignore();
                cout << "Enter contact name: ";
                getline(cin,temp.name);
               
                cout << "Enter phone number: ";
                getline(cin,temp.phoneNum);

                cout << "Enter email address: ";
                getline(cin,temp.email);
                
                
                phonebook.push_back(temp);
                cout << "Contact is saved " << endl;
                break;
            }
            case 2:{
                if(phonebook.size() == 0){
                    cout << "phonebook is empty" << endl;
                }else{
                    cout << " SAVED CONTACTS " << endl;
                    for(int i = 0 ; i < phonebook.size() ; i++){
                        cout << "Name : " << phonebook[i].name
                             << " | Phone Number : " << phonebook[i].phoneNum
                             << " | Email :" << phonebook[i].email << endl;
                             
                    }
                }
                break;
            }
            case 3:{
                if(phonebook.size() == 0 ){
                    cout << "phonebook is empty" << endl;
                }else{
                    string searchname;
                    cin.ignore();
                    cout << "Enter name : ";
                    getline(cin,searchname);
                    int foundindex = -1;
                    for(int i = 0; i < phonebook.size(); i++){
                        if(phonebook[i].name == searchname){
                            foundindex = i;
                            break;
                        }
                    }
                    if(foundindex != -1){
                       cout << " CONTACT DETAILS FOUND:" << endl;
                        cout << "Name  : " << phonebook[foundindex].name << endl;
                        cout << "Phone : " << phonebook[foundindex].phoneNum << endl;
                        cout << "Email : " << phonebook[foundindex].email << endl;
                }else{
                    cout << "contact not found" << endl;
                    }
                }
                break;
            }
            case 4: {
                if(phonebook.size() == 0){
                    cout << "phonebook is empty" << endl;
                }else{
                    string deletename;
                    cin.ignore();
                    cout << "Enter contact name to delete: ";
                    getline(cin, deletename);
                    int foundindex = -1;
                    for(int i = 0; i < phonebook.size(); i++){
                        if(phonebook[i].name == deletename){
                            foundindex = i;
                            break;
                        }
                    }
                   if(foundindex != -1){
                    phonebook.erase(phonebook.begin() + foundindex);
                    cout << "contact " << deletename << "removed successfully" << endl;
                   }else{
                    cout << "contact name not found" << endl;
                     }
                }
                break;
            }
            case 5: {
                    cout << "Exiting the system" <<endl;
                    break;
                }
                default:
                    cout <<"Invalid choice" << endl;
            }
        } while(choice != 5);
     return 0;
    }