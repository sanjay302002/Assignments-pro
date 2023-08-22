#include <stdio.h>
#include <stdlib.h>
int* gray_code_helper(int n, int* size) {
 if (n == 0) {
 int* result = (int*)malloc(sizeof(int));
 result[0] = 0;
 *size = 1;
 return result;
 }
 int prevSize;
 int* prevGrayCode = gray_code_helper(n - 1, &prevSize);
 int newSize = prevSize * 2;
 int* newGrayCode = (int*)malloc(newSize * sizeof(int));
 for (int i = 0; i < prevSize; i++) {
 newGrayCode[i] = prevGrayCode[i];
 newGrayCode[newSize - 1 - i] = prevGrayCode[i] | (1 << (n - 1));
 }
 *size = newSize;
 free(prevGrayCode);
 return newGrayCode;
}
int* gray_code(int n, int* returnSize) {
 return gray_code_helper(n, returnSize);
}
int main() {
 int n;
 int* size;
 int* result;
 n = 1;
 result = gray_code(n, size);
 printf("n=%d: [", n);
 for (int i = 0; i < *size; i++) {
 printf("%d%s", result[i], i < *size - 1 ? ", " : "");
 }
 printf("]\n");
 free(result);
 n = 2;
 result = gray_code(n, size);
 printf("n=%d: [", n);
 for (int i = 0; i < *size; i++) {
 printf("%d%s", result[i], i < *size - 1 ? ", " : "");
 }
 printf("]\n");
 free(result);
 n = 3;
 result = gray_code(n, size);
 printf("n=%d: [", n);
 for (int i = 0; i < *size; i++) {
 printf("%d%s", result[i], i < *size - 1 ? ", " : "");
 }
 printf("]\n");
 free(result);
 n = 4;
 result = gray_code(n, size);
 printf("n=%d: [", n);
 for (int i = 0; i < *size; i++) {
 printf("%d%s", result[i], i < *size - 1 ? ", " : "");
 }
 printf("]\n");
 free(result);
 n = 0;
 result = gray_code(n, size);
 printf("n=%d: [", n);
 for (int i = 0; i < *size; i++) {
 printf("%d%s", result[i], i < *size - 1 ? ", " : "");
 }
 printf("]\n");
 free(result);
 return 0;
}
