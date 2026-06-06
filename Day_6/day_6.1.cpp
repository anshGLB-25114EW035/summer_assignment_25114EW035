// #include<iostream>
// #include<math.h>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "enter the decimal : ";
//     cin >> n;
//     int ans = 0;
//     int i = 0;
//     while(n != 0){
//         int bit = n&1;
//         ans = (bit * pow(10,i)) + ans;
//         n = n >> 1;
//         i++;
//     }
//     cout << "answer = " << ans << endl;
// }
#include<iostream>
using namespace std;
int dectobinary(int num)
{
    int ans = 0 , pow = 1;
    while(num > 0 )
    {
        int rem = num%2;
        num/=2;
        ans += (rem * pow);
        pow *= 10;
    }
    return ans;
}
int main(){
    int n;
    cout << "enter the decimal : ";
    cin >> n;
    
    cout << dectobinary(n)<<endl;
    
    return 0;
}