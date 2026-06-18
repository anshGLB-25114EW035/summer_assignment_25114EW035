#include<iostream>
#include<vector>
using namespace std;

int binarysearch(const vector<int>& arr , int target){
    int start = 0 ;
    int end = arr.size() - 1;
    int mid = start + (end - start)/2;
    while(start <= end){
        if(arr[mid] == target){
            return mid;
        }
        if(target > arr[mid]){
            start = mid+1;
        }
        else{
            end = mid -1;
        }
        mid = start + (end-start)/2;
    }
    return -1;
}
int main() {
    // Array must be sorted!
    vector<int> arr = {3,5,6,87,5,43,77,54,889,665,33,99};
    int target = 889;
    int index = binarysearch(arr, target);
    if(index != -1){
        cout <<"Element "<< target << " is at index "<< index << endl;
    }
    else{
        cout <<"Element "<< target << " is not in the array "<< endl;

    }
    return 0;
}