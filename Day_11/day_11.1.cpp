#include<iostream>
using namespace std;
int sumoftwo(int n1 , int n2){
    int sum;
    sum = n1 + n2;
    return sum;
}
int main(){
    int a,b,result;
    cout << "Enter two numbers a and b : ";
    cin >> a;
    cin >> b;
    result = sumoftwo(a,b);
    cout << result;
    return 0;
}