#include<iostream>
using namespace std;
int main()
{
int n,i,count = 0;
cout<<"enter the number:";
cin>>n;
i=1;
while(i<=n)
{
    if(n%i==0)
    count++;
    i++;
}
if(count==2)
cout<<"prime number";
else
cout<<"not prime";
return 0;
}