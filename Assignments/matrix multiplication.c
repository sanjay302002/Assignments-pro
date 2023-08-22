#include <stdio.h>
#include <stdlib.h>
typedef struct {
int rows;
int cols;
int data[100][100]; // Assuming maximum matrix size is 100x100
} Matrix;
Matrix matrixMultiplication(Matrix A, Matrix B) {
Matrix C;
if (A.cols != B.rows) {
C.rows = -1;
C.cols = -1;
return C; // Return an error matrix
}
C.rows = A.rows;
C.cols = B.cols;
for (int i = 0; i < C.rows; i++) {
for (int j = 0; j < C.cols; j++) {
int sum = 0;
for (int k = 0; k < A.cols; k++) {
sum += A.data[i][k] * B.data[k][j];
}
C.data[i][j] = sum;
}
}
return C;
}
void printMatrix(Matrix M) {
for (int i = 0; i < M.rows; i++) {
for (int j = 0; j < M.cols; j++) {
printf("%d ", M.data[i][j]);
}
printf("\n");
}
}
int main() {
Matrix A = {.rows = 2, .cols = 2, .data = {{1, 2}, {3, 4}}};
Matrix B = {.rows = 2, .cols = 2, .data = {{5, 6}, {7, 8}}};
Matrix C = matrixMultiplication(A, B);
if (C.rows == -1) {
printf("Error: Matrices cannot be multiplied, sizes are not
compatible\n");
} else {
printf("Matrix A:\n");
printMatrix(A);
printf("Matrix B:\n");
printMatrix(B);
printf("Matrix C (A * B):\n");
printMatrix(C);
}
return 0;
}