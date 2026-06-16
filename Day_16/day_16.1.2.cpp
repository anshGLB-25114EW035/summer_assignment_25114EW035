//find mising number in array
#include<iostream>
#include<vector>

using namespace std;
int findmissingnumber(const vector<int>& arr){
    int n = arr.size();
    int ans = 0;
    for(int i = 1; i<= n; i++){
        ans = ans^i;
    }
    for(int num: arr){
        ans = ans^num;
    }
    return ans;
}
int main(){
    vector<int> arr = {3,0,1};
    cout <<"Missing number " << findmissingnumber(arr)<< endl;
    return 0;
}
