#include<iostream>
using namespace std;
int main()
{
    int n,prod= 1,remain;
    cout << "enter the numbet:";
    cin>> n;
    while(n>0)
    {
        remain = n%10;
        prod*=remain;
        n = n/10;

    }
    cout<< "product of given number is :"<< prod<<endl;
    return 0;
}