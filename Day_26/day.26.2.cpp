#include<iostream>
using namespace std;
int main(){
    int age;
    cout << "   ## VOTING ELIGIBILITY SYSTEM ## " << endl;
    cout << "Please enter your age: ";
    cin >> age;
    if(age <= 0){
        cout << "Enter a valid age greater than 0." <<endl;
    }
    else if (age >=18){
        cout << "You are eligible to vote " <<endl;
    }
    else{
        cout << "You are not elible to vote yet."<< endl;
        int yearsleft = 18 - age;
        cout << "You need to wait " << yearsleft <<" more year to became eleigible" <<endl;
    }
    return 0;
}