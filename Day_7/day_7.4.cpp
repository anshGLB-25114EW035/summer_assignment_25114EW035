#include<iostream>
using namespace std;
int reverse(int num , int reversenum = 0)
{
    if( num == 0)
    {
        return reversenum;
    }
    int remain = num % 10;
    int newreversenum = (reversenum*10) + remain;
    return reverse(num/10,newreversenum);
}
int main()
{
    int n;
    cout << "Enter the number to be reversed : ";
    cin>> n;
    int result  = reverse(n);
    cout << result << endl;
    return 0;
}