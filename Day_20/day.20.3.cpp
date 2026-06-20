#include<iostream>
#include<vector>
using namespace std;
int main(){
    int rows ,cols;
    
    cout << "Enter the rows:";
    cin >> rows;
    cout << "Enter columns: ";
    cin >> cols;
    vector<vector<int>> matrix(rows,vector<int>(cols));
    cout << "Enter the elements of the matrix:" << endl;
    for(int i =  0; i< rows; i++){
        for(int j = 0; j<cols; j++){
            cin >> matrix[i][j];
        }
    }
    cout <<" row wise sum: "<< endl;
    for(int i = 0; i < rows; i++){
        int rowsum = 0;
        for(int j = 0 ; j < cols; j++){
            rowsum += matrix[i][j];
        }
        cout << "sum of row " << i <<" is " <<rowsum << endl;
    }
    return 0;
}