#include<iostream>
using namespace std;
 void inputarray(int arr[],int size)
 {
    cout << "Enter " << size << " elements for the array :"<< endl;
    for(int i = 0; i< size;i++){
        cin >> arr[i];
    }
 }
 void printarray(int arr[] , int size){
    cout << "The elements in the array are: ";
    for(int i = 0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
 }
 int main(){
    int size;
    cout << "Enter the size of the array : ";
    cin >> size;
    if(size <= 0){
        cout <<"Invalid array size"<< endl;
        return 1;
    }
    int myarray[100];
    inputarray(myarray,size);
    printarray(myarray,size);
    return 0;
 }