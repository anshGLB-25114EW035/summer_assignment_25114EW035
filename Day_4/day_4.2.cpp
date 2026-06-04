#include<iostream>
using namespace std;
 int getfibonacci(int n)
 {
    if(n <= 0)
    return 0;
    if(n == 1)
    return 1;
    int n1 = 0;
    int n2 = 1;

    for ( int i = 2; i <= n ; ++i)
    {
        int next = n1 + n2;
        n1 = n2;
        n2 = next;
    }
    return n2;
 }

 int main()
 {
    int n;
    cout << "Enter the n: ";
    cin >> n ;
    
    cout << "Term  "<< n << " is "<< getfibonacci(n)<<endl;
    return 0;
 }