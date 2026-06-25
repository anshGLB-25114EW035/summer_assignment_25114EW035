#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
vector<string> findcommoncharacter(vector<string>& words){
    vector<int> hash1(26,0);
    for(char ch: words[0]){
        hash1[ch - 'a']++;
    }
    for(int i = 1;i < words.size(); i++){
        vector<int> hash2(26,0);
        for(char ch : words[i]){
            hash2[ch - 'a']++;
        }
        for(int j = 0 ; j < 26; j++){
            hash1[j] = min(hash1[j],hash2[j]);
        }
    }
vector<string> ans; 
for(int i = 0 ; i< 26; i++){
         while(hash1[i] > 0){
            string ch = "";
            ch += (i + 'a');
            ans.push_back(ch);
            hash1[i]--;
        }
    }
    return ans;
}
int main(){
    vector<string> words = {"hello","bell","lion"};
    vector<string> ans = findcommoncharacter(words);
    cout << "common characters :";
    for(string str : ans){
        cout << str << " ";
    }
    cout << endl;
    return 0;
}