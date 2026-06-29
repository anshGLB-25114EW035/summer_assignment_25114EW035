#include<iostream>
#include<vector>
using namespace std;
int main(){
    int choice;
    vector<int> arr;
    do {
        cout << " \n MENU DRIVEN ARRAY SYSTEM "<< endl;
        cout << "1. Insert element" << endl;
        cout << "2. Display aray" << endl;
        cout << "3. Search element" <<endl;
        cout << "4. Delete element by index" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice){
            case 1:{    
                int element;
                cout << "Enter element to insert: ";
                cin >> element;
                arr.push_back(element);
                cout << element << " inserted successfully"<< endl;
                break;
            }
               
            
            case 2:{
                if(arr.size() == 0){
                    cout << "array is empty" << endl; 
                }else{
                    cout << "Array elements : [";
                    for(int i = 0; i< arr.size(); i++){
                        cout << arr[i] << ",";
                    }
                    cout << "]" << endl;
                }
                break;
            }
            
            case 3:{
                if(arr.size() == 0){
                    cout << "Array is empty" << endl;
                }else{
                    int key;
                    cout << " enter element to search";
                    cin >> key;
                    int foundindex = -1;
                    for(int i = 0 ; i <arr.size() ; i++){
                        if(arr[i] == key){
                            foundindex = i;
                            break;
                        }
                    }
                    if(foundindex != -1){
                        cout << " element is at index" << foundindex << endl;
                    }else {
                        cout << " element no found in array" << endl;
                    }
                }
               break; 
            }
            
            case 4:{
                if(arr.size() == 0){
                    cout << "array is empty " << endl;
                }else{
                    int deleteidx;
                    cout << "Enter index to delete( 0 to " << arr.size()-1 << ")" ;
                    cin >> deleteidx;
                    if(deleteidx >= 0 && deleteidx < arr.size()){
                        arr.erase(arr.begin() + deleteidx);
                        cout << "element at index " << deleteidx << " is deleted" << endl;
                    }else{
                        cout << "Invalid input" << endl;
                    }
                }
                break;
            }
            
            case 5:
                cout <<" Exiting the array operational system"<< endl;
                break;
            default:
                cout << "Invalid choice" << endl;
        }
    }while(choice != 5);
    return 0;
}