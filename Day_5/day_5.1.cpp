#include<iostream>
using namespace std;
bool isperfect(int num)
{
    if(num<=1)
    {
        return false;
    }
    int sum = 1;
    for(int i = 2; i*i <= num; i++)
    {
        if(num%i == 0){
            if(i*i == num)
            {
                sum += i;
            }
            else
            {
                sum += i +(num/i);
            }
        }
    }
    return sum == num;
}
int main(){
    int number;
    cout << "enter the number : ";
    cin >> number;
    if(isperfect(number))
    {
        cout << number << " is perfect number."<<endl;
    }
    else
    {
        cout << number <<"is not a perfect number"<< endl;
    }
    return 0;
}