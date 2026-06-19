#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;
    if (rows != cols) {
        cout << " Diagonal sums cannot be calculated for a SQUARE matrix ";
    }
    int size = rows;
    int matrix[100][100];
    cout << "Enter the elements of the matrix:";
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cin >> matrix[i][j];
        }
    }
    int onDiagonalSum = 0;
    int offDiagonalSum = 0;
    for (int i = 0; i < size; i++) {
        onDiagonalSum += matrix[i][i];
        offDiagonalSum += matrix[i][size - 1 - i];
    }
    cout << "Sum of On-Diagonal: " << onDiagonalSum <<endl;
    cout << "Sum of Off-Diagonal: " << offDiagonalSum;
     return 0;
}
