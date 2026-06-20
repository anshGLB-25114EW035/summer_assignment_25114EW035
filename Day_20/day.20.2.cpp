#include<iostream>
#include<vector>
using namespace std;
int main(){
    int rows ,cols;
    
    cout << "Enter the rows:";
    cin >> rows;
    cout << "Enter columns: ";
    cin >> cols;
    if(rows != cols){
        cout << "The matrix is not a square matrix:";
        return 0;
    }
    vector<vector<int>> matrix(rows,vector<int>(cols));
    cout << "Enter the elements of the matrix:" << endl;
    for(int i =  0; i< rows; i++){
        for(int j = 0; j<cols; j++){
            cin >> matrix[i][j];
        }
    }
    bool issymetric = true;
     for(int i = 0 ; i< rows ; i++){
        for(int j = 0; j < cols; j++){
            if(matrix[i][j] != matrix[j][i]){
                issymetric = false;
                break;
            }
        }
        if(!issymetric){
            break;
        }
     }
     if(issymetric){
        cout <<"The matrix is symmetric"<<endl;
     }
     else{
        cout <<"Not symmetric"<<endl;
     }
     return 0;
}