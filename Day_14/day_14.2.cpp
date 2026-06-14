#include<iostream>
using namespace std;
int getsinglefrequency(int arr[], int size ,int target){
    int count = 0 ;
    for(int i = 0 ; i < size; i++){
        if (arr[i] == target){
            count++;
        }
    }
    return count;
}
int main (){
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int myarray[100];
    cout << "Enter the" << size << "elements:"<<endl;
    for(int i = 0 ; i< size ;i++){
        cin >> myarray[i];
    }
    int target;
    cout << "Enter the element to find its frequency:";
    cin >> target;
    
    int frequency = getsinglefrequency(myarray,size,target);
    cout << " The element "<< target << " appears " << frequency << " times."<<endl;
    return 0;
}