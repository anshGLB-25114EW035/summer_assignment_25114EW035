#include<iostream>
using namespace std;
void inputarray(int arr[], int size){
    cout << "Enter " << size << "element for the array : "<< endl;
    for(int i = 0 ;i < size; i++){
        cin >> arr[i];
    }
}
void countevenodd(int arr[], int size, int &evencount ,int &oddcount){
    evencount = 0;
    oddcount = 0;
    for (int i = 0 ; i< size;i++){
        if(arr[i]%2 == 0 ){
            evencount++;
        }
        else{
            oddcount++;
        }
    }
}
int main(){
    int size;
    cout << "Enter the size of the array:";
    cin >> size;
    if(size <= 0){
        cout << "Invalid array size"<<endl;
        return 1;
    }
    int myarray[100];
    inputarray(myarray,size);
    int even = 0;
    int odd = 0;
    countevenodd(myarray,size,even ,odd);
    cout << "total even elements: " << even <<  endl;
    cout <<" total odd elements: " << odd << endl;
    return 0;
}
