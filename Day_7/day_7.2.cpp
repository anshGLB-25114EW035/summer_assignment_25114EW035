#include<iostream>
using namespace std;
int fibonacci(int n){
    if( n<=1){
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}
int main(){
    int n;
    cout << "enter the no of terms :";
    cin >> n;
    if (n <= 0){
        cout << "enter a valid positive integer : ";
        return 1;
    }
    cout << " the required fibonacci series as given : ";
    for (int i = 0; i< n; ++i)
    {
        cout << fibonacci(i) << " , ";

    }
    cout << endl;
    return 0;
}