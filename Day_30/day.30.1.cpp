#include<iostream>
#include<string>
using namespace std;
int main(){
    string names[100];
    int rollnos[100];
    float cgpas[100];
    int currstud = 0;
    int choice;

    while(true){
        cout << "\n STUDENT RECORD SYSTEM " << endl;
        cout << "1. add student record"<< endl;
        cout << "2. display all record"<< endl;
        cout << "3. search student by roll no"<< endl;
        cout << "4. Exit"<< endl;
        cout << "enter your choice:";
        cin >> choice;
        if(choice == 1){
            if(currstud >= 100){
                cout << "Database full "<< endl;
            }else{
                cout << "Enter roll number: ";
                cin >> rollnos[currstud];
                cin.ignore();
                cout << "Enter name: ";
                getline(cin,names[currstud]);
                cout << "Enter CGPA: ";
                cin >> cgpas[currstud];
                currstud++;
                cout << "Student data added " << endl;
            }
        }
        else if(choice == 2){
            if(currstud == 0){
                cout << "No record found" << endl;
            }else{
                cout << "  Displaying All Records  " << endl;
                for(int i = 0 ; i < currstud; i++){
                    cout << "Roll No: " << rollnos[i] 
                         << " | Name: " << names[i] 
                         << " | CGPA: " << cgpas[i] << endl;
                }
            }
        }
        else if(choice == 3){
            if(currstud == 0){
                cout << "No data available to search" << endl;
            }else{
                int targetrollno;
                cout << "Enter roll number to search: ";
                cin >> targetrollno;
                bool flag = false;
                for(int i = 0 ; i < currstud; i++){
                    if(rollnos[i] == targetrollno){
                        cout << " Record Found " << endl;
                        cout << " Name: " << names[i] << endl;
                        cout << " CGPA: " << cgpas[i] << endl;
                        flag = true;
                        break;
                    }
                }
                if(flag == false){
                    cout << "student with this roll no not found" <<endl;
                }
            }
        }
        else if(choice == 4){
            cout << "Existing the system" << endl;
            break;
        }
        else{
            cout << "Invalid choice " <<endl;
        }
    }
    return 0;
}