#include<iostream>
using namespace std;
int maximum(int n1, int n2){
    if(n1 > n2){
        return n1;
    }
    else{
        return n2;
    }
}
int main(){
    int a,b,result;
    cout << "Enter two numbers a and b : ";
    cin >> a;
    cin >> b;
    result = maximum(a,b);
    cout << result;
    return 0;
}