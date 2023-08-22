#include <stdio.h>
#include <stdlib.h>
typedef struct {
int rows;
int cols;
int data[100][100]; // Assuming maximum matrix size is 100x100
} Matrix;
void findAntiDiagonals(Matrix M) {
int totalDiagonals = M.rows + M.cols - 1;
for (int d = 0; d < totalDiagonals; d++) {
int rowStart = (d < M.rows) ? 0 : d - M.rows + 1;
int colStart = (d < M.rows) ? M.cols - 1 - d : 0;
int count = (d < M.rows) ? d + 1 : M.cols - d;
for (int i = 0; i < count; i++) {
printf("%d ", M.data[rowStart + i][colStart - i]);
}
printf("\n");
}
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
printf("Anti-Diagonals:\n");
findAntiDiagonals(matrix);
return 0;
}