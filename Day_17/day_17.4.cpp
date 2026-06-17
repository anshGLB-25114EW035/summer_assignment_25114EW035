#include<iostream>
#include<vector>
using namespace std;
vector<int> findcommonelement(int arr1[],int n,int arr2[],int m){
    int i = 0;
    int j = 0;
    vector<int> ans ;
    int lastadded = -1;
    while(i < n && j < m){
        if(arr1[i] == arr2[j]){
            if(arr1[i] != lastadded){
                ans.push_back(arr1[i]);
                lastadded = arr1[i];
            }
            i++;
            j++;
        }
        else if(arr1[i] < arr2[j]){
            i++;
        }
        else {
            j++;
        }
    }
    return ans;
}
int main(){
    int arr1[] = {1,5,10,20,40,80,100,60};
    int n = sizeof(arr1)/sizeof(arr1[0]);
    int arr2[] = {7,9,20,40,50,70,80,100,120} ;
    int m = sizeof(arr2)/sizeof(arr2[0]);
    vector<int>  common = findcommonelement(arr1,n,arr2,m);
    cout <<" common elements: ";
    for(int val: common){
        cout << val << " ";
    }
    cout << endl;
    return 0;
}