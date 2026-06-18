#include<iostream>
#include<vector>
using namespace std;

void bubblesort(vector<int>& arr){
    int n = arr.size();

    for(int i = 0; i < n-1; i++){
        bool swapped = false;
        
        for(int j = 0; j < n-i-1; j++){
            if(arr[j] > arr[j +1]){
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false){
            break;
        }
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
    cout << "Original Array: ";
    printarray(arr);
    bubblesort(arr);
    cout << "Sorted Array:  ";
    printarray(arr);
    return 0;
}