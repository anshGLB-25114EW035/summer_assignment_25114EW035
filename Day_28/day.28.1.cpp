#include<iostream>
#include<string>
#include<vector>
using namespace std;

struct Book{
    int bookID;
    string title;
    string auther;
    bool isIssued;
};
int main(){
    vector<Book> library;
    int choice;
    do{
        cout << "\n LIBRARY MANAGEMENT SYSTEM " << endl;
        cout << "1. Add new book" << endl;
        cout << "2. Display all books " << endl;
        cout << "3. Issue a book " << endl;
        cout << "4. Return a book   " << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch(choice){
            case 1: {
                Book temp;
                cout << "Enter Book ID: ";
                cin >> temp.bookID;
                cin.ignore();
                cout << "Enter book title: ";
                getline(cin,temp.title);
                cout << "Enter auther name: ";
                getline(cin,temp.auther);
                temp.isIssued = false;
                library.push_back(temp);
                cout << "Book added to library " << endl;
                break;
            }
            case 2:{
                if(library.size() == 0){
                    cout << "No book found in the system" << endl;
                }else{
                    cout << " LIBRARY CATALOGUE " << endl;
                    for(int i = 0 ; i <library.size() ; i++){
                        cout << "ID : " << library[i].bookID
                             << " | Title : " << library[i].title
                             << " | Auther :" << library[i].auther;

                        if(library[i].isIssued){
                            cout << " ISSUED ";
                        } else{
                            cout << " AVAILABLE";
                        }
                        cout << endl;
                    }
                }
                break;
            }
            case 3:{
                if(library.size() == 0 ){
                    cout << "No record found" << endl;
                }else{
                    int searchID;
                    cout << "Enter book ID to issue : ";
                    cin >> searchID;
                    int foundindex = -1;
                    for(int i = 0; i < library.size(); i++){
                        if(library[i].bookID == searchID){
                            foundindex = i;
                            break;
                        }
                    }
                    if(foundindex != -1){
                        if(library[foundindex].isIssued){
                            cout << " Book is issued to someone";
                        }else{
                            library[foundindex].isIssued = true;
                            cout << " Book " << library[foundindex].title << "is issued successfully";
                        }
                    }else{
                        cout << "No book found with given ID" << endl;
                    }
                }
                break;
            }
            case 4: {
                if(library.size() == 0){
                    cout << "No record found" << endl;
                }else{
                    int searchID;
                    cout << "Enter book ID to return:";
                    cin >> searchID;

                    int foundindex = -1;
                    for( int i = 0;i < library.size(); i++){
                        if(library[i].bookID == searchID){
                            foundindex = i;
                            break;
                        }
                    }
                    if(foundindex != -1){
                        if(!library[foundindex].isIssued){
                            cout << "Book is already in the library";
                        }else{
                            library[foundindex].isIssued =false;
                            cout << "Book"<< library[foundindex].title << "returned successfully";
                        }
                    }else{
                        cout << "No book found with this id";
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
