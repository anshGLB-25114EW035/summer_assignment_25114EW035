#include<iostream>
#include<vector>
using namespace std;
void printdiagonal(const vector<vector<int>>& mat , int n){
    for(int i = 0; i < n ; i++){
        for(int j = 0 ; j< n ; j++){
            if(i == j){
                cout << mat[i][j] << " ";
            }
        }
    }
    cout << endl;
}
int main(){
    int n ; 
    cout << "Enter the size of the square matrix : ";
    cin >> n;
    vector<vector<int>> mat(n, vector<int>(n));
    cout << "Enter the matrix element: " << endl;
    for(int i = 0 ; i<n; i++){
        for(int j = 0 ; j < n; j++){
            cin >>mat[i][j];
        }
    }
    cout << "The diagonal element are: ";
    printdiagonal(mat,n);
    return 0;
    
}