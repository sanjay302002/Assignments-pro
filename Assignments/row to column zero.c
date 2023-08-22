#include <stdio.h>
#include <stdbool.h>
typedef struct {
int rows;
int cols;
int data[100][100]; // Assuming maximum matrix size is 100x100
} Matrix;
void rowToColumnZero(Matrix* M) {
int rows = M->rows;
int cols = M->cols;
bool zeroRows[rows]; // To keep track of rows containing zero
for (int i = 0; i < rows; i++) {
zeroRows[i] = false;
for (int j = 0; j < cols; j++) {
if (M->data[i][j] == 0) {
zeroRows[i] = true;
break;
}
}
}
for (int i = 0; i < rows; i++) {
if (zeroRows[i]) {
for (int j = 0; j < cols; j++) {
M->data[i][j] = 0;
}
}
}
for (int j = 0; j < cols; j++) {
bool hasZero = false;
for (int i = 0; i < rows; i++) {
if (M->data[i][j] == 0) {
hasZero = true;
break;
}
}
if (hasZero) {
for (int i = 0; i < rows; i++) {
M->data[i][j] = 0;
}
}
}
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
Matrix matrix1 = {.rows = 3, .cols = 3, .data = {{1, 2, 3}, {4, 0, 6}, {7, 8, 9}}};
printf("Original Matrix:\n");
printMatrix(matrix1);
rowToColumnZero(&matrix1);
printf("Modified Matrix:\n");
printMatrix(matrix1);
Matrix matrix2 = {.rows = 3, .cols = 2, .data = {{1, 2}, {0, 4}, {5, 6}}};
printf("Original Matrix:\n");
printMatrix(matrix2);
rowToColumnZero(&matrix2);
printf("Modified Matrix:\n");
printMatrix(matrix2);
return 0;
}