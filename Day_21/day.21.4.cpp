#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main(){
    string str;
    cout << " Enter a string in lowercase: ";
    getline(cin,str);
    for(int i = 0 ; i < str.length();i++){
        str[i] = toupper(str[i]);
    }
    cout << "upper case string is :" << str <<endl;
    return 0;
}