// =============================================================================
// PROGRAMMING FUNDAMENTALS — Assignment 4
// =============================================================================
//
// TASK: Matrix Operations
//
// Write a C++ program that performs three operations on matrices (2D arrays),
// each implemented in its own function.
//
// NOTE: Use a fixed maximum size of 10 for array dimensions.
//       Declare arrays as int matrix[10][10].
//
// -----------------------------------------------------------------------------
// PART A — Transpose a Matrix
// -----------------------------------------------------------------------------
// - Read an M x N matrix from the user.
// - Compute and display its transpose (rows become columns, columns become rows).
//
// Example (2 x 3 input):
//
//   Original Matrix:      Transposed Matrix:
//   1  2  3               1  4
//   4  5  6               2  5
//                         3  6
//
// -----------------------------------------------------------------------------
// PART B — Add Two Matrices
// -----------------------------------------------------------------------------
// - Read two matrices of exactly the same size (M x N).
// - Compute their element-wise sum and display the result.
//
// -----------------------------------------------------------------------------
// PART C — Multiply Two Matrices
// -----------------------------------------------------------------------------
// - Read matrix A of size M x N and matrix B of size N x P.
//   (Number of COLUMNS in A must equal number of ROWS in B.)
// - Compute and display the matrix product A x B (result is M x P).
//
// -----------------------------------------------------------------------------
// EXPECTED INPUT FORMAT
// -----------------------------------------------------------------------------
// The user enters each row's values one at a time:
//
//   Enter number of rows: 2
//   Enter number of columns: 3
//   Enter element [0][0]: 1
//   Enter element [0][1]: 2
//   ...
//
// -----------------------------------------------------------------------------
// REQUIREMENTS
// -----------------------------------------------------------------------------
// - Use nested loops for all operations (no external libraries).
// - Each operation must be in its own function (see scaffold below).
// - Display each matrix in a neat, aligned grid using setw().
// - Tip: Complete Part A first, then Parts B and C.
//

// =============================================================================
// YOUR CODE BELOW — remove the // symbols from the scaffold and fill it in
// =============================================================================

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

const int MAX = 10;

// Read an M x N matrix from the user
void readMatrix(int matrix[10][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Enter element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }
}

// Display a matrix in a neat aligned grid
void displayMatrix(int matrix[10][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << setw(4) << matrix[i][j];
        }
        cout << endl;
    }
}

// PART A — Transpose a Matrix
void transposeMatrix(int matrix[10][10], int rows, int cols) {
    int transposed[10][10] = {0};

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transposed[j][i] = matrix[i][j];
        }
    }

    cout << "\nOriginal Matrix:" << endl;
    displayMatrix(matrix, rows, cols);

    cout << "\nTransposed Matrix:" << endl;
    displayMatrix(transposed, cols, rows);
}

// PART B — Add Two Matrices
void addMatrices(int a[10][10], int b[10][10], int rows, int cols) {
    int result[10][10] = {0};

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = a[i][j] + b[i][j];
        }
    }

    cout << "\nMatrix A:" << endl;
    displayMatrix(a, rows, cols);

    cout << "\nMatrix B:" << endl;
    displayMatrix(b, rows, cols);

    cout << "\nResult (A + B):" << endl;
    displayMatrix(result, rows, cols);
}

// PART C — Multiply Two Matrices
void multiplyMatrices(int a[10][10], int b[10][10], int rowsA, int colsA, int colsB) {
    int result[10][10] = {0};

    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            result[i][j] = 0;
            for (int k = 0; k < colsA; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    cout << "\nMatrix A:" << endl;
    displayMatrix(a, rowsA, colsA);

    cout << "\nMatrix B:" << endl;
    displayMatrix(b, colsA, colsB);

    cout << "\nResult (A x B):" << endl;
    displayMatrix(result, rowsA, colsB);
}

int main() {
    int choice;

    cout << "======================" << endl;
    cout << "    MATRIX OPERATIONS" << endl;
    cout << "======================" << endl;
    cout << "1. Transpose a matrix" << endl;
    cout << "2. Add two matrices" << endl;
    cout << "3. Multiply two matrices" << endl;
    cout << "Enter your choice (1-3): ";
    cin >> choice;

    int m, n, p;
    int matrixA[10][10] = {0};
    int matrixB[10][10] = {0};

    switch (choice) {
        case 1:
            cout << "\nEnter number of rows: ";
            cin >> m;
            cout << "Enter number of columns: ";
            cin >> n;
            readMatrix(matrixA, m, n);
            transposeMatrix(matrixA, m, n);
            break;

        case 2:
            cout << "\nEnter number of rows: ";
            cin >> m;
            cout << "Enter number of columns: ";
            cin >> n;
            cout << "\nEnter elements of matrix A:" << endl;
            readMatrix(matrixA, m, n);
            cout << "\nEnter elements of matrix B:" << endl;
            readMatrix(matrixB, m, n);
            addMatrices(matrixA, matrixB, m, n);
            break;

        case 3:
            cout << "\nEnter number of rows of A: ";
            cin >> m;
            cout << "Enter number of columns of A: ";
            cin >> n;
            cout << "Enter number of columns of B: ";
            cin >> p;
            cout << "\nEnter elements of matrix A (" << m << " x " << n << "):" << endl;
            readMatrix(matrixA, m, n);
            cout << "\nEnter elements of matrix B (" << n << " x " << p << "):" << endl;
            readMatrix(matrixB, n, p);
            multiplyMatrices(matrixA, matrixB, m, n, p);
            break;

        default:
            cout << "Invalid choice." << endl;
    }

    return 0;
}