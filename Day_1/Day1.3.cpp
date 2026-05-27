#include<iostream>
using namespace std;
int main()
{
    int i ,fact=1,num;
    cout<<"enter the number";
    cin>>num;
    for(i=1;i<=num;++i)
    {
        fact=fact*i;
    }
    cout<<"factorial of "<< "num" << "is:" << fact;
    return 0;
}