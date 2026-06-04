#include<iostream>
#include<cmath>
using namespace std;

int countdigits(int num)
{
    int count = 0 ;
    if (num == 0)
    return 1;

    while(num>0)
    {
        count++;
        num/=10;

    }
    return count;
}
bool isarmstrong(int num)
{
    int totaldigits = countdigits(num);
    int n1 = num;
    int sum = 0;
    while(n1>0)
    {
        int remain = n1%10;
        sum += round(pow(remain,totaldigits));
        n1/= 10;

    }
    return sum == num;

}
int main()
{
    int start,end;
    cout << "enter the lower limit : ";
    cin >> start;
    cout << "Enter the upper limit : ";
    cin>> end;

    cout << "armstrong number in between "<< start << " and " << end <<" are ";
    for(int i = start ; i <= end ; i++)
    {
        if(isarmstrong(i))
        {
            cout << i <<" , ";
        }
    }
    return 0;
}