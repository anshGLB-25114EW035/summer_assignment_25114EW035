#include<iostream>
#include<string>
using namespace std;
string findlongestword(string s){
    string longestword = "";
    string currword = "";
    int n = s.length();
    for( int i = 0; i <=n; i++) {
        if(i == n || s[i] == ' '){
            if(currword.length() > longestword.length()){
                longestword = currword;
            }
            currword = "";
        }
        else{
            currword += s[i];
        }
    }
    return longestword;
}
int main(){
    string str = "My name is ansh srivastava ";
    cout << "original string: \""<< str <<  "\"" <<endl;
    string result = findlongestword(str);
    cout << "longest word: \"" << result <<"\""<< endl;
    cout << "length :" << result.length() << endl;
    return 0;
}