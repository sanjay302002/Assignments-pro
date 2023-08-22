#include <stdio.h>
#include <stdbool.h>
typedef struct {
int rows;
int cols;
int data[100][100]; // Assuming maximum matrix size is 100x100
} Matrix;
Matrix addMatrices(Matrix A, Matrix B) {
Matrix C;
if (A.rows != B.rows || A.cols != B.cols) {
C.rows = -1;
C.cols = -1;
return C; // Return an error matrix
}
C.rows = A.rows;
C.cols = A.cols;
for (int i = 0; i < C.rows; i++) {
for (int j = 0; j < C.cols; j++) {
C.data[i][j] = A.data[i][j] + B.data[i][j];
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
Matrix A = {.rows = 3, .cols = 3, .data = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}};
Matrix B = {.rows = 3, .cols = 3, .data = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}}};
Matrix C = addMatrices(A, B);
if (C.rows == -1) {
printf("Error: Matrices cannot be added, sizes are not
compatible\n");
} else {
printf("Matrix A:\n");
printMatrix(A);
printf("Matrix B:\n");
printMatrix(B);
printf("Matrix C (A + B):\n");
printMatrix(C);
}
return 0;
}