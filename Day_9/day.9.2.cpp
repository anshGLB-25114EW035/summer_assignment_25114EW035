#include<iostream>
using namespace std;
 int main(){
    int i, j, rows = 5;
    for(i = rows; i >=1; i--)
    {
        for(j = 1; j<=i; j++)
        {
            cout << j;
        }
        cout << "\n";
    }
    return 0;
 }