#include<iostream>
#include<string>
#include<vector>
using namespace std;
struct Employee{
    int empID;
    string name;
    float basesalary;
    float allowances;
};
int main(){
    vector<Employee> database;
    int choice;
    do{
        cout << " SALARY MANAGEMENT SYSTEM "<< endl;
        cout << "1. add employee salary details "<< endl;
        cout << "2. display all salary record"<< endl;
        cout << "3. search employee salary detail by ID"<< endl;
        cout << "4. Exit"<< endl;
        cout << "Enter your choice:";
        cin >> choice;
        switch(choice){
            case 1:{
                Employee temp;
                cout << "Enter Employee ID: ";
                cin >> temp.empID;
                cin.ignore();
                cout << "Enter Name: ";
                getline(cin,temp.name);
                cout << "Enter base monthly salary: ";
                cin >> temp.basesalary;
                cout << "Enter other allowances: ";
                cin >> temp.allowances;

                database.push_back(temp);
                cout << " employee salary record added successfully" <<endl;
                break;
            }
            case 2:{
                if(database.size() == 0 ){
                    cout << "no record found in the system" << endl;
                }else{
                    cout <<" REGISTERED EMPLOYEE SALARY DETAIL "<< endl;
                    for(int i = 0; i < database.size(); i++){
                        float hra = database[i].basesalary * 0.10;
                        float da = database[i].basesalary * 0.05;
                        float netsalary = database[i].basesalary + hra + da + database[i].allowances;
                        cout << " ID: " << database[i].empID 
                             << "| Name : "<< database[i].name 
                             << " | Base: " << database[i].basesalary 
                             << " | Net in hand salary " << netsalary <<endl;

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
                        float base = database[foundindex].basesalary;
                        float hra = database[foundindex].basesalary * 0.10;
                        float da = database[foundindex].basesalary * 0.05;
                        float netsalary = database[foundindex].basesalary + hra + da + database[foundindex].allowances;
                        cout << "RECORD FOUND : " << endl;
                        cout << "Employee ID : " << database[foundindex].empID << endl;
                        cout << "Name : " << database[foundindex].name << endl;
                        cout << "Base salary: " << base << endl;
                        cout << "HRA (10%) :"  << hra << endl;
                        cout << "DA(5%)  :"  << da << endl;
                        cout << "Allowances :"  << database[foundindex].allowances << endl;
                        cout << "Net salary :"  << netsalary << endl;
                    }else{
                        cout << "No  employee is found with this ID"  <<endl;
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