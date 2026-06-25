#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
bool comparebylength(const string& a, const string& b){
    if(a.length() != b.length()){
        return a.length() < b.length();
    }
    return a < b;
}
void printvector(const vector<string>& words){
    for(const string& word : words){
        cout << "\"" << word << "\"(Length: " << word.length()<< ")\n";
    }
}
int main(){
    vector<string> words ={"hello","fun","summer","hi","magician"};
    cout << "before sorting : "<< endl;
    printvector(words);
    sort(words.begin(),words.end(),comparebylength);
    cout << "after sorting :" << endl;
    printvector(words);
    return 0;

}