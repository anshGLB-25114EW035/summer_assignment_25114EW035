#include<iostream>
#include<vector>

using namespace std;
int main(){
    int r1,c1,r2,c2;
    cout << "Enter rows and columns for first matrix:";
    cin >> r1 >> c1;
    cout << "Enter rows and columns for second matrix:";
    cin >> r2 >> c2;
    if(c1 != r2){
        cout << "Error,Columns of Matrix A must equal Rows of Matrix B";
        return 0;
    }
    vector<vector<int>> A(r1, vector<int>(c1));
    vector<vector<int>> B(r2, vector<int>(c2));
    vector<vector<int>> C(r1, vector<int>(c2,0));
    cout << "Enter elements for matrix A:"<< endl;
    for(int i = 0; i< r1; i++){
        for(int j = 0; j< c1; j++){
            cin >> A[i][j];
        }
    }
    cout << "Enter elements for matrix B:"<< endl;
    for(int i = 0; i< r1; i++){
        for(int j = 0; j< c1; j++){
            cin >> B[i][j];
        }
    }
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    cout << "\nResultant Matrix (A x B):" << endl;
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}