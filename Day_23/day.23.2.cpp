#include<iostream>
#include<string>
using namespace std;
char firstrepeatingchar(string str){
    int freq[26] = {0};
    
    for(int i = 0; i< str.length(); i++){
        char ch = str[i];
        if(ch >= 'a' && ch <= 'z'){
            int index = ch - 'a';
            if(freq[index] == 1){
                return ch;
            }
            freq[index]++;
        }
    }
    return '#';
}
int main(){
    string str;
    cout << "Enter the lowercase string: ";
    getline(cin,str);
    char result = firstrepeatingchar(str);
    if(result != '#'){
        cout << "The first  repeating character is : " << result << endl;
    }
    else{
        cout << "no repeatinig charater" << endl;
    }
    return 0;
}