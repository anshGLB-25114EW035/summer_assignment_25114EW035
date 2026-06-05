#include<iostream>
using namespace std ;
int main()
{
    int num ,i ;
    cout << "Enter the number ; ";
    cin >> num;
    if ( num <= 0)
    {
        cout <<"Enter the positive number :";
    }
    for( i = 1; i<= num; ++i)
    {
        if(num%i == 0)
        {
            cout << i << " , ";
        }
    }
    return 0;
}