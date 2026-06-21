#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main(){
    string str;
    cout << "Enter a string: ";
    getline(cin,str);
    int vowelcount = 0;
    int consonantcount = 0;
    for(int i = 0 ; i < str.length(); i++){
        char ch = str[i];
        if(isalpha(ch)){
            char lowerch = tolower(ch);
            if((lowerch == 'a' || lowerch == 'e' || lowerch =='i' || lowerch == 'o' || lowerch == 'u')){
                vowelcount++;
            }
            else{
                consonantcount++;
            }
        }
    }
    cout <<"Total vowels: " << vowelcount<<endl;
    cout <<"Total consonants: "<< consonantcount << endl;
    return 0;
}