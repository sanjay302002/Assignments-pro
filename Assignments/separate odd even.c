#include <stdio.h>
void separateOddEven(int arr[], int n) {
 int oddIndex = 0;
 int evenIndex = n - 1;
 int result[n];
 for (int i = 0; i < n; i++) {
 if (arr[i] % 2 == 0) {
 result[evenIndex--] = arr[i]; 
 } else {
 result[oddIndex++] = arr[i]; 
 }
 }
 for (int i = 0; i < n; i++) {
 arr[i] = result[i]; 
 }
}
int main() {
 int arr[] = {4, 3, 5, 7, 8, 2};
 int n = sizeof(arr) / sizeof(arr[0]);
 separateOddEven(arr, n);
 printf("Modified array: ");
 for (int i = 0; i < n; i++) {
 printf("%d ", arr[i]);
 }
 printf("\n");
 return 0;
}
