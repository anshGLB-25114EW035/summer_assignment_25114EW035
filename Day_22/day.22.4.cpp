#include<iostream>
#include<string>
using namespace std;
void removespaces(string &str){
    int left = 0;
    for(int right = 0 ; right <str.length() ; right++){
        if(str[right] != ' '){
            str[left] = str[right];
            left++;
        }
    }
    str.resize(left);

}
int main(){
    string str;
    cout << "Enter the string:";
    getline(cin,str);
    removespaces(str);
    cout<< "the string after removing spaces: "  << str << endl;
    return 0;
}