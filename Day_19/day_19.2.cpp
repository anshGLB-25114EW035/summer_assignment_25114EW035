#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> subtractionmatrices(const vector<vector<int >>& A,const vector<vector<int>>& B, int rows, int cols){
    vector<vector<int>> result(rows,vector<int>(cols,0));
    for(int i = 0; i< rows; i++){
        for(int j = 0 ;j< cols; j++){
            result[i][j] = A[i][j] - B[i][j];
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
    cout << "Entere the number of rows and columns: ";
    cin >> rows >> cols;
    cout << "Enter element for matrix A: "<< endl;
    vector<vector<int>> A(rows,vector<int>(cols));
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols ; j++){
            cin >> A[i][j];
        }
    }
    cout << "Enter element for matrix B: "<< endl;
    vector<vector<int>> B(rows,vector<int>(cols));
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols ; j++){
            cin >> B[i][j];
        }
    }
    vector<vector<int>> summatrix = subtractionmatrices(A,B,rows,cols);
    cout << "Resultant matrix after subtraction: " << endl;
    printmatrix(summatrix);
    return 0;
}