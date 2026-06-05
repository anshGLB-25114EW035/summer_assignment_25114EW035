#include<iostream>
using namespace std;
int getfactorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n ; i++)
    {
        fact *= i;
    }
    return fact;
}
int main()
{
    int num,n1;
    int sum = 0;
    cout << "enter the numbet to be checked : ";
    cin >> num;
    if (num < 0)
    {
        cout << num << " is not a strong numbet ";
        return 0;

    }
    n1 = num;
    while(n1 > 0)
    {
        int remain = n1%10;
        sum += getfactorial(remain);
        n1/=10;
    }
    if( sum == num)
    {
        cout << num << " is strong number " << endl;

    }
    else
    cout << num << " is not a strong number " << endl;
    return 0;
}