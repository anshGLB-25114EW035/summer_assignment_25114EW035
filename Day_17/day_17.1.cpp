#include<iostream>
#include<vector>
using namespace std;
void mergearray(int arr1[],int n ,int arr2[],int m ,vector<int>& ans){
    int i = 0;
    int j = 0;
    while( i < n && j < m){
        if(arr1[i] < arr2[j]){
            ans.push_back(arr1[i]);
            i++;
        }
        else{
            ans.push_back(arr2[j]);
            j++;
        }
    }
    while( i < n){
        ans.push_back(arr1[i]);
        i++;
    }
    while( j < m){
        ans.push_back(arr2[j]);
        j++;
    }
}
void printarray(const vector<int>& arr){
    for (int num: arr){
        cout << num << " ";
    }
    cout << endl;
}
int main(){
    int arr1[] = {1,5,7,3};
    int n = sizeof(arr1)/sizeof(arr1[0]);
    
    int arr2[] = {8,2,6,4,9};
    int m = sizeof(arr2)/sizeof(arr2[0]);
    vector<int> ans;
    mergearray(arr1,n,arr2,m,ans); 
    cout << "merged array is :";
    printarray(ans);
    return 0;
    
}