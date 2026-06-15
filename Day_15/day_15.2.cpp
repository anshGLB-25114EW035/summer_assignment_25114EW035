#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void leftrotate(vector<int>& arr, int d){
    int n = arr.size();
    d = d % n;
    reverse(arr.begin(), arr.begin() + d);
    reverse(arr.begin() + d, arr.end());
    reverse(arr.begin(), arr.end());

}
void printarray(const vector<int>& arr){
    for (int num : arr){
        cout << num << " ";

    }
    cout << endl;
}
int main(){
    vector<int> arr = {1,2,3,4,5,6,7,8,9};
    int d = 3;
    cout << "original array: ";
    printarray(arr);
    leftrotate(arr,d);
    cout << "array after left rotation by " << d << " positions: ";
    printarray(arr);
    return 0;
}