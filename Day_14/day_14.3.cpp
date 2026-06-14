#include<iostream>
#include<climits>
using namespace std;
void inputarray( int arr[],int size){
    cout <<"Enter "<< size << " elements for the array";
    for(int i = 0 ; i < size; i++){
        cin >> arr[i];
    }
}
int getsecondlargest(int arr[],int size){
    if(size < 2){
        return INT_MIN;
    }
    int largest = INT_MIN;
    int secondlargest = INT_MIN;
    for(int i = 0; i< size ; i++){
        if(arr[i]>largest){
            secondlargest = largest;
            largest = arr[i];   
        }
        else if(arr[i] < largest && arr[i] > secondlargest){
            secondlargest = arr[i];
        }
    }
    return secondlargest;
}
int main(){
    int size;
    cout << "Enter the size of the array ";
    cin >> size;
    int myarray[100];
    inputarray(myarray,size);
    int ans = getsecondlargest(myarray,size);
    if ( ans ==INT_MIN){
        cout << "no distinct second largest element exists"<< endl;
    }
    else{
        cout << "The second largest element is :" << ans << endl;
    }
    return 0;
}