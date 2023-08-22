#include <stdio.h>
#include <stdlib.h>
int* product_array_puzzle(int* arr, int n) {
int* product = (int*)malloc(sizeof(int) * n);
// Calculate prefix products
int prefix_product = 1;
for (int i = 0; i < n; i++) {
product[i] = prefix_product;
prefix_product *= arr[i];
}
// Calculate suffix products and combine with prefix products
int suffix_product = 1;
for (int i = n - 1; i >= 0; i--) {
product[i] *= suffix_product;
suffix_product *= arr[i];
}
return product;
}
int main() {
int test_case_1[] = {1, 2, 3, 4, 5};
int n1 = sizeof(test_case_1) / sizeof(test_case_1[0]);
int* result1 = product_array_puzzle(test_case_1, n1);
for (int i = 0; i < n1; i++) {
printf("%d ", result1[i]);
}
free(result1);
printf("\n");
int test_case_2[] = {0, 1, 2, 3, 4, 5};
int n2 = sizeof(test_case_2) / sizeof(test_case_2[0]);
int* result2 = product_array_puzzle(test_case_2, n2);
for (int i = 0; i < n2; i++) {
printf("%d ", result2[i]);
}
free(result2);
printf("\n");
int test_case_3[] = {-1, 2, -3, 4, -5, 6, -7};
int n3 = sizeof(test_case_3) / sizeof(test_case_3[0]);
int* result3 = product_array_puzzle(test_case_3, n3);
for (int i = 0; i < n3; i++) {
printf("%d ", result3[i]);
}
free(result3);
printf("\n");
int test_case_4[] = {10, 20, 30, 40, 50};
int n4 = sizeof(test_case_4) / sizeof(test_case_4[0]);
int* result4 = product_array_puzzle(test_case_4, n4);
for (int i = 0; i < n4; i++) {
printf("%d ", result4[i]);
}
free(result4);
printf("\n");
int test_case_5[] = {1, 1, 1, 1, 1};
int n5 = sizeof(test_case_5) / sizeof(test_case_5[0]);
int* result5 = product_array_puzzle(test_case_5, n5);
for (int i = 0; i < n5; i++) {
printf("%d ", result5[i]);
}
free(result5);
printf("\n");
return 0;
}