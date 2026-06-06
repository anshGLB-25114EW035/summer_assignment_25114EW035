#include<iostream>
#include<cmath>
using namespace std;
int binarytodecimal(long long n)
{
    int decimal = 0;
    int i = 0;
    int remain;
    while( n != 0){
        remain = n%10;
        n/=10;
        decimal += remain*pow(2,i);
        ++i;
    }
    return decimal;
}
int main(){
    long long binary;
    cout << "Entere the binary numbet : ";
    cin >> binary;
    cout << binarytodecimal(binary)<<endl;
    return 0;
}