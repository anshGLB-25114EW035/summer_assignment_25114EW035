#include<iostream>
#include<cmath>
using namespace std;
int largestprimefactor(int n)
{
    int maxprime;
    while(n%2 == 0)
    {
        maxprime = 2;
        n /= 2;
    }
    for(int i = 3; i*i <=n; i +=2)
    {
        while(n%i == 0 )
        {
            maxprime = i;
            n /= i;
        }
    }
    if(n>2)
    {
        maxprime = n;
    }
    return maxprime;
}
int main()
{
    int number;
    cout << " Enter a number : ";
    cin >> number;
    if(number > 1)
    {
        cout << "the largest prime factor of "<< number <<" is "<< largestprimefactor(number)<<endl;
    }
    else{
        cout << "enter a valid interger " << endl ;
    }
    return 0;
}
