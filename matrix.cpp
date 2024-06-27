#include <iostream>
using namespace std;
const int MAX = 100;
void inputMatrix(int matrix[MAX][MAX], int& rows, int& cols) {
    cout << "Enter dimensions of matrix (rows columns): ";
    cin >> rows >> cols;
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            cin >> matrix[i][j];
}
void multiplyMatrices(int A[MAX][MAX], int B[MAX][MAX], int C[MAX][MAX], int rowsA, int colsA, int colsB) {
    for (int i = 0; i < rowsA; ++i)
        for (int j = 0; j < colsB; ++j) {
            C[i][j] = 0;
            for (int k = 0; k < colsA; ++k)
                C[i][j] += A[i][k] * B[k][j];
        }
}
void displayMatrix(int matrix[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j)
            cout << matrix[i][j] << " ";
        cout << endl;
    }
}
int main() {
    int A[MAX][MAX], B[MAX][MAX], C[MAX][MAX];
    int rowsA, colsA, colsB;
    inputMatrix(A, rowsA, colsA);
    inputMatrix(B, colsA, colsB);
    if (colsA != colsB) {
        cout << "Error: Matrices cannot be multiplied!" << endl;
        return 1;
    }
    multiplyMatrices(A, B, C, rowsA, colsA, colsB);
    cout << "Resultant matrix:" << endl;
    displayMatrix(C, rowsA, colsB);
    return 0;
}
