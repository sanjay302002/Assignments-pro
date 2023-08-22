#include <stdio.h>
#include <stdlib.h>
typedef struct {
int rows;
int cols;
int data[100][100]; // Assuming maximum matrix size is 100x100
} Matrix;
Matrix rotateMatrix(Matrix original) {
Matrix rotated;
rotated.rows = original.cols;
rotated.cols = original.rows;
for (int i = 0; i < original.rows; i++) {
for (int j = 0; j < original.cols; j++) {
rotated.data[j][original.rows - 1 - i] = original.data[i][j];
}
}
return rotated;
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
Matrix rotated1 = rotateMatrix(matrix1);
printf("Original Matrix:\n");
printMatrix(matrix1);
printf("Rotated Matrix:\n");
printMatrix(rotated1);
Matrix matrix2 = {.rows = 2, .cols = 2, .data = {{1, 2}, {3, 4}}};
Matrix rotated2 = rotateMatrix(matrix2);
printf("Original Matrix:\n");
printMatrix(matrix2);
printf("Rotated Matrix:\n");
printMatrix(rotated2);
return 0;
}