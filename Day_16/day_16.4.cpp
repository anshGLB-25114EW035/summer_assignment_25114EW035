#include<iostream>
#include<vector>
using namespace std;
int removeduplicates(vector<int>& arr){
    int n = arr.size();
    if(n == 0) return 0;
    int i = 0;
    for(int j = 1; j< n;j++){
        if(arr[j] != arr[i]){
            i++;
            arr[i] = arr[j];
        }
    }
    return i + 1;
}
int main(){
    vector<int> arr ={1,1,2,2,3,4,4,6};
    cout << "original array:";
    for(int num : arr)cout << num << " ";
    cout << endl;
    int uniquecount = removeduplicates(arr);
    cout <<" array after removing dublicates: ";
    for( int k = 0; k<uniquecount;k++){
        cout << arr[k] << " ";
    }
    cout << endl;
    cout <<" total unique elements: "<< uniquecount << endl;
    return 0;
}