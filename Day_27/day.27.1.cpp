#include<iostream>
#include<string>
#include<vector>
using namespace std;
struct Student{
    int rollno;
    string name;
    float cgpa;
};
int main(){
    vector<Student> database;
    int choice;
    do{
        cout << " STUDENT RECORD MANAGEMENT SYSTEM"<< endl;
        cout << "1. add student record"<< endl;
        cout << "2. display all record"<< endl;
        cout << "3. search student by roll no"<< endl;
        cout << "4. Exit"<< endl;
        cout << "enter your choice:";
        cin >> choice;
        switch(choice){
            case 1:{
                Student temp;
                cout << "Enter roll number: ";
                cin >> temp.rollno;
                cin.ignore();
                cout << "Enter Name: ";
                getline(cin,temp.name);
                cout << "Enter CGPA: ";
                cin >> temp.cgpa;
                database.push_back(temp);
                cout << "record added successfully" <<endl;
                break;
            }
            case 2:{
                if(database.size() == 0 ){
                    cout << "no record found in the system" << endl;
                }else{
                    cout <<" ALL RECORD IN SYSTEM"<< endl;
                    for(int i = 0; i < database.size(); i++){
                        cout << " Roll No: " << database[i].rollno << "| Name : "<< database[i].name << " | CGPA : " << database[i].cgpa<<endl;

                    }
                }
                break;

            }
            case 3: {
                if(database.size() == 0 ){
                    cout << "no record found in the system" << endl;
                }else{
                    int searchrollno;
                    cout << "Enter the roll no: ";
                    cin >> searchrollno;
                    int foundindex = -1;
                    for(int i = 0;i < database.size(); i++){
                        if(database[i].rollno == searchrollno){
                            foundindex = i;
                            break;
                        }
                    }
                    if(foundindex != -1){
                        cout << "record found" << endl;
                        cout << "Roll No: " << database[foundindex].rollno << endl;
                        cout << "Name: " << database[foundindex].name << endl;
                        cout << "CGPA: " << database[foundindex].cgpa << endl;
                    }else{
                        cout << "No student found with this roll no"  <<endl;
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