#include <iostream>
#include <vector>
using namespace std;
void selectionsort(vector<int>& arr, int n){
    for(int i = 0; i< n-1; i++){
        int minindex =i;
        for(int j =i+1;j<n;j++){
            if(arr[j] < arr[minindex]){
                minindex = j;
            }
        }
        swap(arr[i],arr[minindex]);
    }
}
void printarray( const vector<int>& arr){
    for(int num : arr){
        cout << num << " ";
    }
    cout << endl;
}
int main() {
    vector<int> arr = {56,43,56,44,22,15,77,58,1,100};
    int n = arr.size();
    cout << "Original Array: ";
    printarray(arr);
    selectionsort(arr,n);
    cout << "Sorted Array:  ";
    printarray(arr);
    return 0;
}