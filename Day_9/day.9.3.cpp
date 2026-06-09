#include<iostream>
using namespace std;
 int main(){
    int i, j, rows = 5;
    char ch ='A';
    for(i = 1; i <= rows; i++)
    {
        
        for(j = 1; j<=i; j++)
        {
            cout << ch;
        }
        ch++;
        cout << "\n";
    }
    return 0;
 }