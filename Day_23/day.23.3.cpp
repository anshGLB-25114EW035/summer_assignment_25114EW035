#include<iostream>
#include<string>
using namespace std;
bool isanagram(string str1, string str2){
    if(str1.length() != str2.length()){
        return false;
    }
    int freq[26] = {0};
    for(int i = 0 ; i< str1.length(); i++){
        freq[str1[i] - 'a']++;
        freq[str2[i] - 'a']--;
    }
    for(int i = 0; i < 26; i++){
        if(freq[i] != 0){
            return false;
        }
    }
    return true;
}
int main(){
    string str1,str2;
    cout << "Enter first lowercase word: ";
    cin >> str1;
    cout <<"Enter second lowercase word: ";
    cin >> str2;
    if(isanagram(str1,str2)){
        cout << "given strings are anagrams: " << endl;
    }
    else{
        cout << "given strings are not anagrams" << endl;
    }
    return 0;
}