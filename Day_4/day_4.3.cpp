#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int num,n1,remain,digit = 0, n2, arm =0;
    cout << "Enter the number: ";
    cin >> num;

    n1 = num;
    while(num!=0)
    {
        num/=10;
        digit++;
    }
    n2 = n1;
    while(n1!=0)
    {
        remain = n1%10;
        arm +=round(pow(remain,digit));
        n1/=10;

    }
    if(arm == n2){
        cout << n2 <<" is armstrong number "<< endl;
        
    }
    else{
        cout<<n2 <<" is not a armstrong number"<<endl;
    }
    return 0;
}