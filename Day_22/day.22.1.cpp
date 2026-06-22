#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main(){
    string str;
    cout << "enter a string : ";
    getline(cin,str);
    int start = 0;
    int end = str.length() - 1;
    bool ispalindrome = true;
    while(start < end){
        if(tolower(str[start]) != tolower(str[end])){
            ispalindrome = false;
            break;
        }
        start++;
        end--;
    }
    if(ispalindrome){
        cout << "The string is palindrome " << endl;

    }else{
        cout << "The string is not a palindrome" << endl;
    }
    return 0;
}