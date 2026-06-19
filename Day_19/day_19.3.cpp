#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> transposematrix(const vector<vector<int >>& mat, int rows, int cols){
    vector<vector<int>> result(cols,vector<int>(rows,0));
    for(int i = 0; i< rows; i++){
        for(int j = 0 ;j< cols; j++){
            result[j][i] = mat[i][j];
        }
    }
    return result;
}
void printmatrix(const vector<vector<int>>& matrix){
    for(const auto& row : matrix){
        for(int element : row){
            cout << element << " ";
        }
        cout << endl;
    }
}
int main(){
    int rows,cols;
    cout << "Enter the number of rows and columns: ";
    cin >> rows >> cols;
    cout << "Enter element for matrix : "<< endl;
    vector<vector<int>> mat(rows,vector<int>(cols));
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols ; j++){
            cin >> mat[i][j];
        }
    }
    vector<vector<int>> transpose = transposematrix(mat,rows,cols);
    cout << "original matrix :" <<endl;
    printmatrix(mat);
    cout << "Resultant matrix after transpose: " << endl;
    printmatrix(transpose);
    return 0;
}