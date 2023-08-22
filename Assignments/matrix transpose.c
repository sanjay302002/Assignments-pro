#include <stdio.h>
#include <stdlib.h>
typedef struct {
int rows;
int cols;
int data[100][100]; // Assuming maximum matrix size is 100x100
} Matrix;
Matrix transposeMatrix(Matrix A) {
Matrix transposed;
transposed.rows = A.cols;
transposed.cols = A.rows;
for (int i = 0; i < transposed.rows; i++) {
for (int j = 0; j < transposed.cols; j++) {
transposed.data[i][j] = A.data[j][i];
}
}
return transposed;
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
Matrix matrix1 = {.rows = 3, .cols = 3, .data = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}};
Matrix transposed1 = transposeMatrix(matrix1);
printf("Original Matrix:\n");
printMatrix(matrix1);
printf("Transposed Matrix:\n");
printMatrix(transposed1);
Matrix matrix2 = {.rows = 2, .cols = 3, .data = {{1, 2, 3}, {4, 5, 6}}};
Matrix transposed2 = transposeMatrix(matrix2);
printf("Original Matrix:\n");
printMatrix(matrix2);
printf("Transposed Matrix:\n");
printMatrix(transposed2);
Matrix matrix3 = {.rows = 3, .cols = 2, .data = {{1, 2}, {3, 4}, {5, 6}}};
Matrix transposed3 = transposeMatrix(matrix3);
printf("Original Matrix:\n");
printMatrix(matrix3);
printf("Transposed Matrix:\n");
printMatrix(transposed3);
return 0;
}