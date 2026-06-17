#include<iostream>
#include<vector>
using namespace std;
vector<int> findintersection(int arr1[],int n ,int arr2[],int m ){
    int i = 0;
    int j = 0;
    vector<int> ans;
    while(i < n && j < m){
        if(arr1[i] == arr2[j]){
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else if( arr1[i] < arr2[j]){
            i++;
        }
        else{
            j++;
        }
    }
    return ans;
}
int main(){
    int arr1[] = {1,2,2,3,3,4};
    int n = sizeof(arr1)/sizeof(arr1[0]);
    int arr2[] = {2,3,3,4,5,6} ;
    int m = sizeof(arr2)/sizeof(arr2[0]);
    vector<int> intersection = findintersection(arr1,n,arr2,m);
    cout <<" intersection of arrays: ";
    for( int val : intersection){
        cout << val << "  ";

    }
    cout << endl;
    return 0;
}