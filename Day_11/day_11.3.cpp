#include<iostream>
using namespace std;
bool prime(int n)
{
    if( n == 0 || n ==1){
        return false;
    }
    if( n == 2 || n == 3 ){
        return true;
    }
    for(int i = 2 ; i*i <= n ; i++){
        if(n % i == 0){
            return false;
        }   
    }
    return true;
    
}
int main(){
    int a,result;
    cout << "Enter the number : ";
    cin >> a;
    if(prime(a)){
        cout << "prime number";
    }
    else{
        cout << "not a prime number";
    }
    return 0;
}