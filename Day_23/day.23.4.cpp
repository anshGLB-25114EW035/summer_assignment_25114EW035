#include<iostream>
#include<string>
using namespace std;
char getmaxoccuringchar(string str){
    int freq[26] = {0};
    for(int i = 0 ; i< str.length(); i++){
        char ch = str[i];
        int number = 0;
        if(ch >= 'a' && ch <= 'z'){
            number = ch - 'a';
        }
        else if(ch >= 'A' && ch <= 'Z'){
            number = ch - 'A';
        }
        freq[number]++;
    }
    int maxi = -1;
    int ansindex = 0;
    for(int i = 0 ;i < 26; i++){
        if(maxi < freq[i]){
            maxi = freq[i];
            ansindex  = i;
        }
    }
    char finalans = 'a' + ansindex;
    return finalans;
}
int main(){
    string str;
    cout << "Enter your string: ";
    getline(cin,str);
    cout <<"Max occuring character is : " << getmaxoccuringchar(str) <<endl;
    return 0;
}