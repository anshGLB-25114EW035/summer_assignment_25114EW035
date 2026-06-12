#include<iostream>
using namespace std;
bool isperfect(int n)
{
    if(n <= 1){
        return false;
    }
    int sum =1 ;
    for (int i = 2;i*i <= n; i++){
        if(n%i == 0){
            sum += i;
            
            if(i*i != n){
                sum += (n/i);
            }
        }
    }
    return sum == n;
}
 int main(){
    int num;
    cout << "Enter a number:";
    cin >> num;
    if (isperfect(num)){
        cout << "perfect number"<< endl;
    }
    else{
        cout << "not perfect number" << endl;
    }
    return 0;
 }