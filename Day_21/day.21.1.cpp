#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<< "Enter a string: ";
    getline(cin,str);
    int length = 0;
    while(str[length] != '\0'){
        length++;
    }
    cout << "the length  of the string is :" << length <<endl;
    return 0;
}