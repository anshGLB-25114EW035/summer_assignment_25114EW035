#include<iostream>
using namespace std;
int sod(int n){
    if(n == 0 ){
        return 0;

    }
    return (n % 10) + sod(n/10);
}
int main(){
    int num , result;
    cout<< "Enter the number : ";
    cin >> num;
    result = sod(num);
    cout << result;
    return 0;

}