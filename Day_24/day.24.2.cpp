#include<iostream>
#include<vector>
#include<string>
using namespace std;
int compress(vector<char>& chars){
    int i =  0;
    int ansindex = 0;
    int n = chars.size();
    while(i < n){
        int j = i + 1;
        while(j < n && chars[i] == chars[j]){
            j++;
        }
        chars[ansindex++] = chars[i];
        int count = j-i;
        if(count > 1){
            string cnt = to_string(count);
            for(char ch: cnt){
                chars[ansindex++] = ch;
            }
        }
        i =j;
    }
    return ansindex;
}
int main(){
    vector<char> chars = {'a','a','v','v','c','c','c'};
    cout << "original string:";
    for(char c : chars) cout << c;
    cout <<endl;
    int newlength = compress(chars);
    cout << "compressed string: ";
    for(int i = 0 ; i< newlength; i++){
        cout << chars[i];
    }
    cout <<"\n lenght:" << newlength << endl;
    return 0;
}