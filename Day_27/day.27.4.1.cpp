#include<iostream>
#include<string>
#include<vector>
using namespace std;
struct Marksheet{
    int rollno;
    string name;
    int physics;
    int chemistry;
    int maths;

};
int main(){
    vector<Marksheet> database;
    int choice;
    do{
        cout << " MARKSHEET GENERATIOH SYSTEM"<< endl;
        cout << "1. add student marks"<< endl;
        cout << "2. display all record"<< endl;
        cout << "3. Generate individual marksheet by roll no"<< endl;
        cout << "4. Exit"<< endl;
        cout << "enter your choice:";
        cin >> choice;
        switch(choice){
            case 1:{
                Marksheet temp;
                cout << "Enter roll number: ";
                cin >> temp.rollno;
                cin.ignore();
                cout << "Enter Name: ";
                getline(cin,temp.name);
                cout << "Enter Physics marks out of 100 : ";
                cin >> temp.physics;
                cout << "Enter chemistry marks out of 100 : ";
                cin >> temp.chemistry;
                cout << "Enter Maths marks out of 100: ";
                cin >> temp.maths;
                database.push_back(temp);
                cout << "academic entries added successfully" <<endl;
                break;
            }
            case 2:{
                if(database.size() == 0 ){
                    cout << "no record found in the system" << endl;
                }else{
                    cout <<" ALL RECORD IN SYSTEM"<< endl;
                    for(int i = 0; i < database.size(); i++){
                        int total = database[i].physics + database[i].chemistry + database[i].maths;
                        float percentage = total / 3.0;
                        cout << " Roll No: " << database[i].rollno 
                             << "| Name : "<< database[i].name 
                             << " | Total : " << total << "/300 "
                             << " | percentage : " << percentage << "%" << endl;

                    }
                }
                break;

            }
            case 3: {
                if(database.size() == 0 ){
                    cout << "no record found in the system" << endl;
                }else{
                    int searchrollno;
                    cout << "Enter the roll no for marksheet generation: ";
                    cin >> searchrollno;
                    int foundindex = -1;
                    for(int i = 0;i < database.size(); i++){
                        if(database[i].rollno == searchrollno){
                            foundindex = i;
                            break;
                        }
                    }
                    if(foundindex != -1){
                        int p = database[foundindex].physics;
                        int c = database[foundindex].chemistry;
                        int m = database[foundindex].maths;
                        int total = p + c + m;
                        float percentage = total / 3.0;
                        cout << "            MARKSHEET " << endl;
                        cout << " Roll Number  : " << database[foundindex].rollno<<endl;
                        cout << " Student Name : " << database[foundindex].name << endl;

                        cout << " SUBJECT        MAX MARKS        MARKS OBTAINED" << endl;
                        cout << " Physics           100                 " << p << endl;
                        cout << " chemistry         100                 " << c << endl;
                        cout << " Mathematics       100                 " << m << endl;

                        cout << " Total Score : " << total << "/300" <<endl;
                        cout << " Percentage : " << percentage << "%" << endl;

                        if(p >= 33 && c >= 33 && m >= 33){
                            cout << "PASS" << endl;
                        }else {
                            cout << "FAIL" << endl;
                        }
                    }else{
                        cout << "No record for this roll no" << endl;
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