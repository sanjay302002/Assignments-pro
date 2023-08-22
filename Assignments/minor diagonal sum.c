#include <stdio.h>
typedef struct {
int rows;
int cols;
int data[100][100]; // Assuming maximum matrix size is 100x100
} Matrix;
int sumMinorDiagonal(Matrix M) {
int sum = 0;
int n = M.rows; // Assuming it's a square matrix
for (int i = 0; i < n; i++) {
sum += M.data[i][n - 1 - i];
}
return sum;
}
int main() {
Matrix matrix1 = {.rows = 3, .cols = 3, .data = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}};
int sum1 = sumMinorDiagonal(matrix1);
printf("Matrix 1:\n");
for (int i = 0; i < matrix1.rows; i++) {
for (int j = 0; j < matrix1.cols; j++) {
printf("%d ", matrix1.data[i][j]);
}
printf("\n");
}
printf("Sum of Minor Diagonal: %d\n", sum1);
Matrix matrix2 = {.rows = 4, .cols = 3, .data = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}}};
int sum2 = sumMinorDiagonal(matrix2);
printf("Matrix 2:\n");
for (int i = 0; i < matrix2.rows; i++) {
for (int j = 0; j < matrix2.cols; j++) {
printf("%d ", matrix2.data[i][j]);
}
printf("\n");
}
printf("Sum of Minor Diagonal: %d\n", sum2);
return 0;
}