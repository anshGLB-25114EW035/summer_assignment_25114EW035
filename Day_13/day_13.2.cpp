#include<iostream>
using namespace std;
void inputarray(int arr[],int size)
{
    cout << "Enter "<< size << " elements for the array :" << endl;
    for(int i = 0 ; i< size; i++){
         cin >> arr[i];
    }
}
int getsum( int arr[] , int size){
   int totalsum = 0;
   for(int i = 0; i<size ; i++){
    totalsum += arr[i];
   }
   return totalsum;
}
double getaverage(int arr[], int size){
    if(size <= 0){
        return 0.0;
        }
    int totalsum = getsum(arr,size);
    double average = (double)totalsum/size;
    return average;
}
int main(){
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    if(size <= 0){
        cout << "invalid array size"<< endl;
        return 1;
    }
    int myarray[100];
    inputarray(myarray,size);
    int sum = getsum(myarray,size);
    double avg = getaverage(myarray,size);
    cout << "total sum of the elements : " << sum << endl;
    cout << "average of elements : " << avg << endl;
    return 0;
}