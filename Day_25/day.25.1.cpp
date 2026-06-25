#include<iostream>
#include<vector>
using namespace std;
void mergesortedarrays(int arr1[], int n , int arr2[], int m, vector<int>& ans){
    int i = 0;
    int j = 0;
    while(i < n && j < m){
        if(arr1[i] < arr2[j]){
            ans.push_back(arr1[i]);
            i++;
        }else{
            ans.push_back(arr2[j]);
            j++;
        }
    }
    while(i < n){
        ans.push_back(arr1[i]);
        i++;
    }
    while(j < m){
        ans.push_back(arr2[j]);
        j++;
    }
}
void printvector(const vector<int>& ans){
    for(int val: ans){
        cout << val << " ";
    }
    cout << endl;
}
int main(){
    int arr1[6] = {3,4,5,6,8,9};
    int arr2[2] = {1,2};
    vector<int> ans;
    mergesortedarrays(arr1,6,arr2,2,ans);
    cout << "merge sorted array is : " ;
    printvector(ans);
    return 0;
}