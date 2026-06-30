#include<iostream>
#include<string>
#include<vector>
using namespace std;
struct Employee{
    int empID;
    string name;
    string designation;
    double salary;
};
int main(){
    vector<Employee> database;
    int choice;
    do{
        cout << " MINI EMPLOYEE  MANAGEMENT SYSTEM"<< endl;
        cout << "1. add employee"<< endl;
        cout << "2. display all record"<< endl;
        cout << "3. search employee by ID"<< endl;
        cout << "4. Exit"<< endl;
        cout << "enter your choice:";
        cin >> choice;
        switch(choice){
            case 1:{
                Employee temp;
                cout << "Enter Employee ID: ";
                cin >> temp.empID;
                cin.ignore();
                cout << "Enter Name: ";
                getline(cin,temp.name);
                cout << "Enter Designation: ";
                getline(cin,temp.designation);
                cout << "Enter monthly salary: ";
                cin >> temp.salary;

                database.push_back(temp);
                cout << " employee record added successfully" <<endl;
                break;
            }
            case 2:{
                if(database.size() == 0 ){
                    cout << "no record found in the system" << endl;
                }else{
                    cout <<" REGISTERED EMPLOYEE "<< endl;
                    for(int i = 0; i < database.size(); i++){
                        cout << " ID: " << database[i].empID << "| Name : "<< database[i].name << " | Role: " << database[i].designation << " | salary " << database[i].salary <<endl;

                    }
                }
                break;

            }
            case 3: {
                if(database.size() == 0 ){
                    cout << "no record found in the system" << endl;
                }else{
                    int searchID;
                    cout << "Enter the employ ID: ";
                    cin >> searchID;
                    int foundindex = -1;
                    for(int i = 0;i < database.size(); i++){
                        if(database[i].empID == searchID){
                            foundindex = i;
                            break;
                        }
                    }
                    if(foundindex != -1){
                        cout << "record found" << endl;
                        cout << "Employee ID: " << database[foundindex].empID << endl;
                        cout << "Name: " << database[foundindex].name << endl;
                        cout << "Role: " << database[foundindex].designation << endl;
                        cout << " Salary: " << database[foundindex].salary << endl;
                    }else{
                        cout << "No employ is found with this ID"  <<endl;
                    }
                }
                break;
            }
            case 4:{
                cout << "Exiting the system" << endl;
                break;
            }
            default:
                cout << "Invalid choice" <<endl;
        }
    }while(choice != 4);
    return 0;
}