#include <stdio.h>
#include <stdlib.h>
typedef struct {
int rows;
int cols;
int data[100][100]; // Assuming maximum matrix size is 100x100
} Matrix;
int* rowSums(Matrix M) {
int* sums = (int*)malloc(M.rows * sizeof(int));
for (int i = 0; i < M.rows; i++) {
sums[i] = 0;
for (int j = 0; j < M.cols; j++) {
sums[i] += M.data[i][j];
}
}
return sums;
}
int main() {
Matrix matrix1 = {.rows = 3, .cols = 3, .data = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}};
int* sums1 = rowSums(matrix1);
printf("Matrix 1:\n");
for (int i = 0; i < matrix1.rows; i++) {
for (int j = 0; j < matrix1.cols; j++) {
printf("%d ", matrix1.data[i][j]);
}
printf("\n");
}
printf("Row Sums:\n");
for (int i = 0; i < matrix1.rows; i++) {
printf("%d ", sums1[i]);
}
printf("\n");
Matrix matrix2 = {.rows = 2, .cols = 3, .data = {{1, 2, 3}, {4, 5, 6}}};
int* sums2 = rowSums(matrix2);
printf("Matrix 2:\n");
for (int i = 0; i < matrix2.rows; i++) {
for (int j = 0; j < matrix2.cols; j++) {
printf("%d ", matrix2.data[i][j]);
}
printf("\n");
}
printf("Row Sums:\n");
for (int i = 0; i < matrix2.rows; i++) {
printf("%d ", sums2[i]);
}
printf("\n");
// Free allocated memory
free(sums1);
free(sums2);
return 0;
}