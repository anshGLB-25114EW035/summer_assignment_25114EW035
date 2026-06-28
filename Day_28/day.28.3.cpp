#include<iostream>
#include<string>
#include<vector>
using namespace std;

struct Ticket{
    int ticketno;
    string name;
    string moviename;
    int seatno;
};
int main(){
    vector<Ticket> database;
    int choice;
    do{
        cout << "\n TICKET BOOKING SYSTEM " << endl;
        cout << "1. Book new ticket" << endl;
        cout << "2. Display all booked tickets " << endl;
        cout << "3. Cancel a booking " << endl;
        cout << "4. Search ticket by number " << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch(choice){
            case 1: {
                Ticket temp;
                cout << "Enter Ticket number: ";
                cin >> temp.ticketno;
                cin.ignore();
                cout << "Enter name: ";
                getline(cin,temp.name);
                cout << "Enter movie name: ";
                getline(cin,temp.moviename);
                cout << "Enter seat number: ";
                cin >> temp.seatno;
                
                database.push_back(temp);
                cout << "Ticket booked successfully " << endl;
                break;
            }
            case 2:{
                if(database.size() == 0){
                    cout << "No current booking found " << endl;
                }else{
                    cout << " RESERVATION LIST " << endl;
                    for(int i = 0 ; i < database.size() ; i++){
                        cout << "Ticket No : " << database[i].ticketno
                             << " | Name : " << database[i].name
                             << " | Movie :" << database[i].moviename
                             << " | Seat No : " << database[i].seatno << endl;
                    }
                }
                break;
            }
            case 3:{
                if(database.size() == 0 ){
                    cout << "No record found" << endl;
                }else{
                    int searchno;
                    cout << "Enter Ticket No : ";
                    cin >> searchno;
                    int foundindex = -1;
                    for(int i = 0; i < database.size(); i++){
                        if(database[i].ticketno == searchno){
                            foundindex = i;
                            break;
                        }
                    }
                    if(foundindex != -1){
                        database.erase(database.begin() + foundindex);
                        cout << "Booking with ticket number " << searchno << " is cancelled " << endl;
                    }else{
                    cout << "No booking is with this ticket number" << endl;
                    }
                }
                break;
            }
            case 4: {
                if(database.size() == 0){
                    cout << "No record found" << endl;
                }else{
                   int searchno;
                    cout << "Enter Ticket No : ";
                    cin >> searchno;
                    int foundindex = -1;
                    for(int i = 0; i < database.size(); i++){
                        if(database[i].ticketno == searchno){
                            foundindex = i;
                            break;
                        }
                    }
                   if(foundindex != -1){
                    cout << " RESERVATION FOUND" << endl;
                    cout << "Ticket No :" << database[foundindex].ticketno<< endl;
                    cout << "Name :" << database[foundindex].name<< endl;
                    cout << "Movie  :" << database[foundindex].moviename<< endl;
                    cout << "Seat No :" << database[foundindex].seatno<< endl;
                   }else{
                    cout << "No booking found for this number" << endl;
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
        }while(choice != 5);
        return 0;
}
