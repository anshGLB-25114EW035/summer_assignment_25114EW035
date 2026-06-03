#include<iostream>
using namespace std;
int main()
{
    int a,b,i;
    cout<<"enter two numbers:";
    cin >> a >>b;
    for(i=1;i>0;i++)
    {
        if(i%a==0 && i%b==0)
        {
            cout<<"lcm = "<< i;
            break;
        }
    }
    return 0;
}