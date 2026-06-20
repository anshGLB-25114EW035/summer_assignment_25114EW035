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
    cout <<" column wise sum: "<< endl;
    for(int j = 0; j < cols; j++){
        int colsum = 0;
        for(int i = 0 ; i < rows; i++){
            colsum += matrix[i][j];
        }
        cout << "sum of col " << j <<" is " <<colsum << endl;
    }
    return 0;
}