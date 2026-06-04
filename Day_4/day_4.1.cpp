#include<iostream>
using namespace std;

int main()
{
    int n , n1=0 , n2=1 , nextterm = 0;
    cout << "Enter the number of terms required:";
    cin >> n;
    cout << "Fibonacci Series:";

    for (int i = 1 ; i <= n; ++i)
    {
        if(i  == 1)
        {
            cout << n1 << ",";
            continue;
        }
        if(i == 2)
        {
            cout << n2 << ",";
            continue;

        }
        nextterm = n1 + n2;
        n1 = n2;
        n2 = nextterm;
        cout << nextterm << ",";
    }
    return 0 ;
}