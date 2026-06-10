#include<iostream>
using namespace std;
int main()
{
    int space,rows,i,j;
    cout << "Enter the number of rows : ";
    cin >> rows;
    for(i = 1; i <=rows; i++ )
    {
        for(space = 1; space <= rows-i; ++space)
        {
            cout << " ";
        }
        for(j = 1; j <= i; ++j )
        {
            cout << j;
        }
        for( j = i-1 ; j>=1; --j){
            cout << j;
        }
        cout << endl;
    }
    return 0;
}