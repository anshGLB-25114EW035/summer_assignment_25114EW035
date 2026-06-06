#include<iostream>
using namespace std;
double calpower(double x , int n)
{
    if(n == 0){
        return 1;
    }
    if( n < 0){
        x = 1/x;
        n = -n;
    }
    double result = 1;
    double product = x;
    while(n>0){
        if(n%2 == 1){
            result *= product;
        }
        product *= product;
        n /= 2;
    }
    return result;
}
int main(){
    double x , n , ans;
    cout << "enter the base : ";
    cin >> x;
    cout << "enter the exponent : ";
    cin >> n;
    ans = calpower(x,n);
    cout << ans;
    return 0;

}