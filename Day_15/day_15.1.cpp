#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void reversearray(vector<int>& arr){
    int start = 0 ;
    int end = arr.size()-1;
    while(start < end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
void printarray(const vector<int>&arr){
    for(int num:arr){
        cout << num <<" ";
    }
    cout << endl;
}
int main(){
    vector<int> arr = {1,2,3,4,5,6,7,8,9};
    cout << "original array: ";
    printarray(arr);
    reversearray(arr);
    cout <<"reversed array: ";
    printarray(arr);
    return 0;
}