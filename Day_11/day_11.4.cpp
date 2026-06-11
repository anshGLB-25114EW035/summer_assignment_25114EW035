#include<iostream>
using namespace std;
long long factorial(int n)
{
    if(n < 0){
        return -1;
    }
    long long fact = 1;
    for(int i =1;i <= n; i++){
        fact*=i;
    }
    return fact;
}
int main(){
    int num;
    cout << "Enter the number : ";
    cin >> num;
    cout << factorial(num);
    return 0;
}