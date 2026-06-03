#include<iostream>
using namespace std;
int main()
{
    int num1,num2,i,j, flag;
    cout<< "enter starting number :";
    cin>> num1;
    cout << "enter the ending number:";
    cin>> num2;
    
    cout << "prime numbers between "<< num1 << " and " << num2 <<" are ";

    for(i = num1 ; i <= num2 ; i++)
    {
        if(i ==1 || i == 0)
        continue;

        flag = 1; 
        
        for(j=2; j<=i/2;++j )
        {
            if(i%j ==0){
                flag = 0;
                break; 
            }
        }
        if(flag == 1)
        cout << i <<",";
    }
    return 0;
}