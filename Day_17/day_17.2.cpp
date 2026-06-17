#include<iostream>
#include<vector>
using namespace std;
void findunion(int arr1[],int n, int arr2[],int m){
    int i = 0;
    int j = 0;
    int lastprinted = -1;
    cout << "union of arrays: ";
    while( i < n && j < m){
        if(arr1[i] < arr2[j]){
            if(arr1[i] != lastprinted){
                cout << arr1[i] << " ";
                lastprinted = arr1[i];
            }
            i++;
        }
        else if(arr2[j] < arr1[i]){
            if(arr2[j] != lastprinted){
                cout << arr2[j];
            }
            j++;
        }
        else{
            if(arr1[i] != lastprinted){
                cout << arr1[i] << " ";
                lastprinted = arr1[i];
            }
            i++;
            j++;
        }
    }
    while(i < n){
        if(arr1[i] != lastprinted){
            cout << arr1[i]<< " ";
            lastprinted = arr1[i];
        }
        i++;
    }
    while(j < m){
        if(arr2[j] != lastprinted){
            cout << arr2[j] << " ";
            lastprinted = arr2[j];
        }
        j++;
    }
    cout << endl;
}
int main(){
    int arr1[] = {1,2,3,3,4} ;
    int n = sizeof(arr1)/sizeof(arr1[0]);
    int arr2[] = {2,3,3,4,5,6} ;
    int m = sizeof(arr2)/sizeof(arr2[0]);
    findunion(arr1,n,arr2,m);
    return 0;
}