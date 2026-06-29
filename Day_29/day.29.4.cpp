#include<iostream>
#include<string>
#include<vector>
using namespace std;
struct Item{
    int itemID;
    string name;
    float quantity;
    float price;
};
int main(){
    vector<Item> database;
    int choice;
    do{
        cout << " INVENTORY MANAGEMENT SYSTEM"<< endl;
        cout << "1. add new item details "<< endl;
        cout << "2. display all record"<< endl;
        cout << "3. search item in inventory by ID"<< endl;
        cout << "4. Exit"<< endl;
        cout << "Enter your choice:";
        cin >> choice;
        switch(choice){
            case 1:{
                Item temp;
                cout << "Enter item ID: ";
                cin >> temp.itemID;
                cin.ignore();
                cout << "Enter item Name: ";
                getline(cin,temp.name);
                cout << "Enter quantity in stock: ";
                cin >> temp.quantity;
                cout << "Enter the unit price: ";
                cin >> temp.price;
                database.push_back(temp);
                cout << "Item added successfully" <<endl;
                break;
            }
            case 2:{
                if(database.size() == 0 ){
                    cout << "no record found in the inventory system" << endl;
                }else{
                    cout <<" CURRENT INVENTORY STOCK RECORDS"<< endl;
                    for(int i = 0; i < database.size(); i++){
                        cout << " ID : " << database[i].itemID 
                             << " | Name : "<< database[i].name 
                             << " | Price : " << database[i].price 
                             << " | Quantity" << database[i].quantity <<endl;
                        if(database[i].quantity < 5){
                            cout << " Low stock ";
                        }
                        cout << endl;
                    }
                }
                break;

            }
            case 3: {
                if(database.size() == 0 ){
                    cout << "no record found in the inventory system" << endl;
                }else{
                    int searchID;
                    cout << "Enter the item ID: ";
                    cin >> searchID;
                    int foundindex = -1;
                    for(int i = 0;i < database.size(); i++){
                        if(database[i].itemID == searchID){
                            foundindex = i;
                            break;
                        }
                    }
                    if(foundindex != -1){
                        float totalvalue = database[foundindex].quantity * database[foundindex].price ;
                        cout << " ITEM RECORD FOUND " << endl;
                        cout << "Item ID: " << database[foundindex].itemID << endl;
                        cout << "Name: " << database[foundindex].name << endl;
                        cout << "unit price : " << database[foundindex].price << endl;
                        cout << "quantity available : " << database[foundindex].quantity << endl;
                        cout << "Total valuation : " << totalvalue << endl;
                    }else{
                        cout << "NO item is matched with the ID"  << searchID << endl;
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