#include<iostream>
#include<string>
using namespace std;
void getcharfrequency(string str){
    int freq[26] = {0};
    for(int i = 0; i < str.length(); i++){
        char ch = str[i];
        int number = ch - 'a';
        freq[number]++;
    }
    for(int i = 0; i < 26; i++){
        if (freq[i] > 0){
            char originalchar = i + 'a';
            cout << originalchar << " frequency is :" << freq[i]<< endl;
        }
    }
}
int main(){
    string str;
    cout << "Enter a lowercase string : ";
    getline(cin,str);
    getcharfrequency(str);
    return 0;
}