//find pair with given sum
#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
vector<int> findpairwithsumhashing(const vector<int>& arr, int target){
    unordered_set<int> seen;
    for(int num : arr){
        int complement = target - num;
        if(seen.count(complement)){
            return {complement,num};
        }
        seen.insert(num);
    }
    return {};
}
int main(){
    vector<int> arr ={2,5,3,6,11,66,7,4};
    int target = 10;
    vector<int> pair = findpairwithsumhashing(arr,target);
    if(!pair.empty()){
        cout << "pair found "<<pair[0]<< " and " << pair[1] << endl;
    }
    else{
        cout << "pair does not found" << endl;
    }
    return 0;
}