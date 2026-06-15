#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void movezeroes(vector<int>& arr){
    int i = 0;
    for(int j = 0; j< arr.size(); j++){
        if(arr[j] != 0){
            swap(arr[i],arr[j]);
            i++;
        }
    }
}
void printarray(const vector<int>& arr){
    for(int num : arr){
        cout << num << " ";
    }
    cout << endl;
}
int main(){
    vector<int> arr = {0,1,2,3,45,3,5};
    cout << "original array: ";
    printarray(arr);
    movezeroes(arr);
    cout << "after moving zeroes: ";
    printarray(arr);
    return 0;
}