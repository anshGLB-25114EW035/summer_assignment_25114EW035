#include<iostream>
using namespace std;
void fibonacciseries(int n)
{
    if(n <= 0){

        cout << "enter valid positive input grreater than 0"<< endl;
        return;
    }
    int a = 0;
    int b = 1;
    cout << "Fibonacci series upto " << n << "terms:";
    for(int i = 1; i <= n; i++){
        cout << a << "";
        int nextterm = a+b;
        a=b;
        b=nextterm;
    }
    cout << endl;
}
int main(){
    int terms;
    cout<< "Enter the terms:";
    cin >> terms;
    fibonacciseries(terms);
    return 0;
}