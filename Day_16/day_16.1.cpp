//find mising number in array
#include<iostream>
#include<vector>
#include<numeric>
using namespace std;
int findmissingnumber(const vector<int>& arr){
    int n = arr.size();
    int expectedsum = (n *(n+1)/2);
    int actualsum = 0;
    for(int num : arr){
        actualsum += num;
    }
    return expectedsum - actualsum;
}
int main(){
    vector<int> arr = {3,0,1};
    cout <<"Missing number " << findmissingnumber(arr)<< endl;
    return 0;
}
