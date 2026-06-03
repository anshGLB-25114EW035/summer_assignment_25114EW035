#include<iostream>
using namespace std;
int findgcd(int a,int b)
{
    while(b != 0)
    {
        int temp = b;
        b = a%b;
        a = temp;
    }
    return a;
}
int main()
{
    int num1,num2;
    cout << "enter the numbers:";
    cin >> num1 >> num2;
    
    cout << "gcd of "<< num1 <<"and"<< num2<<"is :" << findgcd(num1,num2) <<endl;
    return 0;
}