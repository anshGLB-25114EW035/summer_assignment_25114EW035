#include<iostream>
#include<climits>
using namespace std;
void intputarray(int arr[],int size){
    cout << "Enter "<< size << " elements for the array:" <<endl;
    for(int i = 0; i< size ; i++){
        cin >> arr[i];
    }
}
int getmax(int arr[],int size){
    int maxval = INT_MIN;
    for(int i = 0; i< size;i++){
        if(arr[i] > maxval){
            maxval = arr[i];
        }
    }
    return maxval;
}
int getmin(int arr[] , int size){
    int minval = INT_MAX;
    for(int i = 0; i< size; i++){
        if(arr[i] < minval){
            minval = arr[i];
        }
    }
    return minval;
}
int main(){
    int size;
    cout << "Enter the size of the array: " << endl;
    cin >> size;
    if(size <=0){
        cout << "invalid size" <<endl;
        return 1;
    }
    int myarray[100];
    intputarray(myarray,size);
    int largest = getmax(myarray,size);
    int smallest = getmin(myarray,size);
    cout << "smallest element: " << smallest <<endl;
    cout << "largest element : " << largest << endl;
    return 0;
}