#include<iostream>
#include<string>
using namespace std;
char firstnonrepeatingchar(string str){
    int freq[26] = {0};
    for(int i = 0; i < str.length(); i++){
        char ch = str[i];
        if(ch >= 'a' && ch <= 'z'){
            freq[ch - 'a']++;
        }
    }
    for(int i = 0; i< str.length(); i++){
        char ch = str[i];
        if(ch >= 'a' && ch <= 'z'){
            if(freq[ch - 'a'] == 1){
                return ch;
            }
        }
    }
    return '#';
}
int main(){
    string str;
    cout << "Enter the lowercase string: ";
    getline(cin,str);
    char result = firstnonrepeatingchar(str);
    if(result != '#'){
        cout << "The first non repeating character is : " << result << endl;
    }
    else{
        cout << "All characters are repeating." << endl;
    }
    return 0;
}