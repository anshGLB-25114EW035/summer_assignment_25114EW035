#include<iostream>
using namespace std;
int main()
{
    int n,digit,rev=0,num;
    cout<<"entr the number";
    cin >> num;
     
    n = num;
    while(num>0)
    {
        digit = num%10;
        rev = rev*10+digit;
        num/=10;
    }
    if(n==rev)
    cout<<"is palindrome"<<endl;
    else
    cout<<"not palindrome"<<endl;
    return 0;
}