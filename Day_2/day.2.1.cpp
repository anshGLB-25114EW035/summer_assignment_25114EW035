#include <iostream>
using namespace std;
int main()
{
    int num,sum=0,digit;
    cout<< "enter the required number:";
    cin >> num;
    while(num>0)
    {
        digit = num%10;
        sum+=digit;
        num/=10;
    }
    cout << "sum of the digits of numbet is:"<<sum<<endl;
    return 0;
}