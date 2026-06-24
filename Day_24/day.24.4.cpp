#include<iostream>
#include<string>
#include<vector>
using namespace std;
string removeduplicates(string s){
    string ans ="";
    vector<bool> seen(256,false);
    for (int i = 0; i <s.length(); i++){
        char ch = s[i];
        if(!seen[ch]){
            ans += ch;
            seen[ch] = true;
        }
    }
    return ans;
}
int main(){
    string str = "programming";
    cout << "Original String: " << str << endl;
    string result = removeduplicates(str);
    cout << "String after removing duplicates: " << result << endl; 
    return 0;
}