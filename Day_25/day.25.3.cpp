#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
void printnames(const vector<string>& names){
    for(const string& name : names){
        cout << name << endl;
    }
}
int main(){
    vector<string> names = {
        "Ansh","Raj","Rahul","Harsh","Aman","vaibhav"
    };
    cout << " Before sorting "<< endl;
    printnames(names);
    cout << endl;
    sort(names.begin(),names.end());
    cout << "After sorting : "<< endl;
    printnames(names);
    return 0;
}