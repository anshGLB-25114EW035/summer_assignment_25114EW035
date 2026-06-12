#include<iostream>
#include<cmath>
using namespace std;
int countdigit(int n){
    int count = 0;
    while(n>0){
        count++;
        n/=10;
    }
    return count;
}
bool isarmstrong(int num){
    if(num < 0){
        return false;
    }
    int originalnum = num;
    int k = countdigit(num);
    int sum = 0;
    while(num > 0){
        int digit = num % 10;
        sum += round(pow(digit,k));
        num /= 10;
    }
    return sum == originalnum;
}
int main(){
    int n;
    cout<< "Enter a number :";
    cin >> n;
    if(isarmstrong(n)){
        cout << n << " is armstrong number" << endl;
    }
    else{
        cout << n <<"  not armstrong" << endl;
    }
    return 0;
}