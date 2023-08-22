#include <stdio.h>
#include <stdlib.h>
typedef struct {
int rows;
int cols;
int data[100][100]; // Assuming maximum matrix size is 100x100
} Matrix;
Matrix generateSpiralMatrix(int n) {
Matrix spiral;
spiral.rows = n;
spiral.cols = n;
int num = 1; // Current number to be filled
int rowStart = 0, rowEnd = n - 1;
int colStart = 0, colEnd = n - 1;
while (num <= n * n) {
for (int j = colStart; j <= colEnd; j++) {
spiral.data[rowStart][j] = num++;
}
rowStart++;
for (int i = rowStart; i <= rowEnd; i++) {
spiral.data[i][colEnd] = num++;
}
colEnd--;
for (int j = colEnd; j >= colStart; j--) {
spiral.data[rowEnd][j] = num++;
}
rowEnd--;
for (int i = rowEnd; i >= rowStart; i--) {
spiral.data[i][colStart] = num++;
}
colStart++;
}
return spiral;
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
int n1 = 3;
Matrix spiral1 = generateSpiralMatrix(n1);
printf("Spiral Matrix with n = %d:\n", n1);
printMatrix(spiral1);
int n2 = 2;
Matrix spiral2 = generateSpiralMatrix(n2);
printf("Spiral Matrix with n = %d:\n", n2);
printMatrix(spiral2);
int n3 = 4;
Matrix spiral3 = generateSpiralMatrix(n3);
printf("Spiral Matrix with n = %d:\n", n3);
printMatrix(spiral3);
return 0;
}