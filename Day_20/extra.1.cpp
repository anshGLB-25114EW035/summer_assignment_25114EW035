// stiver 
#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> multiplymatrices(vector<vector<int>>& A, vector<vector<int>>& B){
    int r1 = A.size();
    int c1 = A[0].size();
    int r2 = B.size();
    int c2 = B[0].size();
    if(c1 != r2){
        cout <<"Matrix multiplication is not possible" << endl;
        return{};
    }
    vector<vector<int>> ans(r1,vector<int>(c2,0));
    for(int i = 0; i < r1 ; i++){
        for(int j = 0 ; j < c2; j++){
            for(int k = 0; k < c1; k++){
                ans[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    return ans;
}
void printmatrix(const vector<vector<int>>& matrix) {
    for (const auto& row : matrix) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
}
int main(){
    vector<vector<int>> A = {
        {1,2},
        {3,4}
    };
    vector<vector<int>> B = {
        {5, 6},
        {7, 8}
    };
    cout << "Matrix A:" << endl;
    printmatrix(A);
    cout << "\nMatrix B:" << endl;
    printmatrix(B);
    vector<vector<int>> result = multiplymatrices(A, B);
    if (!result.empty()) {
        cout << "\nResultant Matrix:" << endl;
        printmatrix(result);
    }

    return 0;

}
