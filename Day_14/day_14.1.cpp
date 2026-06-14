#include<iostream>
using namespace std;
void inputarray(int arr[],int size){
    cout << "Enter "<< size << " elements for the array: "<< endl ;
    for ( int i = 0 ; i< size; i++){
        cin >> arr[i];
    }
}
bool linearsearch (int arr[], int size ,int key){
    for( int i = 0 ; i < size ; i++){
        if ( arr[i] == key){
            return true;
        }
    }
    return false;
    
}
int main(){
    int size;
    cout << "Enter the size of the array: ";
    cin >>  size;
    if ( size <= 0){
        cout << "Invalid array size" << endl;
    }
    int myarray[100];
    inputarray(myarray,size);
    int key;
    cout << " Enter the element you want to search for :";
    cin >> key;
    bool found = linearsearch(myarray,size,key);
    if(found){
        cout << "Element"<<key << " is present in the array"<< endl;
    }else{
        cout << "Element "<< key << "is absent"<< endl;
    }
    return 0;
}