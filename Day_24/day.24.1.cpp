#include<iostream>
#include<string>
using namespace std;
bool checkrotation(string s1, string s2){
    if(s1.length() != s2.length()){
        return false;
    }
    string temp = s1 + s1;
    if(temp.find(s2) != string::npos){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    string s1 = "condingninjas";
    string s2 = "ninjascoding";
    if(checkrotation(s1,s2)){
        cout << "string are rotation of each other"<< endl;
    }else{
        cout << "string are not rotations of each other"<<endl;
    }
    return 0;
}