#include <stdio.h>
#include <stdlib.h>
typedef struct {
int rows;
int cols;
int data[100][100]; // Assuming maximum matrix size is 100x100
} Matrix;
void columnSums(Matrix M) {
for (int j = 0; j < M.cols; j++) {
int colSum = 0;
for (int i = 0; i < M.rows; i++) {
colSum += M.data[i][j];
}
printf("%d ", colSum);
}
printf("\n");
}
int main() {
Matrix matrix = {.rows = 3, .cols = 3, .data = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}};
printf("Matrix:\n");
for (int i = 0; i < matrix.rows; i++) {
for (int j = 0; j < matrix.cols; j++) {
printf("%d ", matrix.data[i][j]);
}
printf("\n");
}
printf("Column Sums:\n");
columnSums(matrix);
return 0;
}