#include <stdio.h>
#include <stdbool.h>
typedef struct {
int rows;
int cols;
int data[100][100]; // Assuming maximum matrix size is 100x100
} Matrix;
bool areMatricesIdentical(Matrix A, Matrix B) {
if (A.rows != B.rows || A.cols != B.cols) {
return false;
}
for (int i = 0; i < A.rows; i++) {
for (int j = 0; j < A.cols; j++) {
if (A.data[i][j] != B.data[i][j]) {
return false;
}
}
}
return true;
}
int main() {
Matrix matrix1 = {.rows = 2, .cols = 2, .data = {{1, 2}, {3, 4}}};
Matrix matrix2 = {.rows = 2, .cols = 2, .data = {{1, 2}, {3, 4}}};
bool identical1 = areMatricesIdentical(matrix1, matrix2);
if (identical1) {
printf("Matrix 1 and Matrix 2 are identical.\n");
} else {
printf("Matrix 1 and Matrix 2 are not identical.\n");
}
Matrix matrix3 = {.rows = 2, .cols = 2, .data = {{1, 2}, {3, 4}}};
Matrix matrix4 = {.rows = 2, .cols = 2, .data = {{1, 2}, {4, 3}}};
bool identical2 = areMatricesIdentical(matrix3, matrix4);
if (identical2) {
printf("Matrix 3 and Matrix 4 are identical.\n");
} else {
printf("Matrix 3 and Matrix 4 are not identical.\n");
}
return 0;
}