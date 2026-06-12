#include<iostream>
#include<string>
using namespace std;
char tolowercase(char ch){
    if((ch >= 'a' && ch <='z') || (ch >= '0' && ch <= '9')){
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}
bool isvalid(char ch){
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
    {
        return true;
    }
    return false;
}
bool ispalindrome(string s){
    string temp = "";
    for(int j = 0; j < s.length(); j++){
        if(isvalid(s[j])){
            temp.push_back(tolowercase(s[j]));
        }
    }
    int start = 0;
    int end = temp.length() - 1;
    while(start <= end){
        if(temp[start] != temp[end]){
            return false;
        }
        else{
            start++;
            end--;
        }
    }
    return true;
}
int main(){
    string str1 ="Racecar";
    cout << str1 <<" is palindrome ?" <<(ispalindrome(str1)?"Yes":"NO") <<endl;
    
    string str2 = "A man, a plan, a canal:Panama";
    cout << "Is valid phrase palindrome>?" << (ispalindrome(str2)?"yes":"no")<<endl;
    
    int num = 12321;
    cout << num << "is palindrome?" << (ispalindrome(to_string(num))?"yes":"no")<<endl;

    return 0;
   
}