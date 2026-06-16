//find max frequency element
#include<iostream>
#include<vector>
#include<unordered_map>
#include<climits>
using namespace std;
int maxfrequencyelement(const vector<int>& arr){
    unordered_map<int,int> freqmap;
    for(int num: arr){
        freqmap[num]++;
    }
    int maxfreq = 0;
    int ans = -1;
    for(auto i : freqmap){
        int element = i.first;
        int count = i.second;
        if(count > maxfreq){
            maxfreq = count;
            ans = element;
        }
    }
    return ans;
}
int main(){
    vector<int> arr = {1,2,3,3,2,1,6,1,8};
    cout << "The  element with max frequency is : "<< maxfrequencyelement(arr)<< endl;
    return 0;
}