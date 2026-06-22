#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main(){
    string str;
    cout << "enter a string : ";
    getline(cin,str);
    int wordcount = 0;
    bool inword = false;
    for(int i = 0; i < str.length(); i++){
        if(isspace(str[i])){
            inword = false;
        }
        else if(!inword){
            inword = true;
            wordcount++;
        }
    }
    cout << "the number of words: " << wordcount <<endl;
    return 0;
}