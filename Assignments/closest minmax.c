#include <stdio.h>
#include <limits.h>
int minMaxProduct(int arr[], int n) {
 int min1 = INT_MAX, min2 = INT_MAX;
 for (int i = 0; i < n; i++) {
 if (arr[i] <= min1) {
 min2 = min1;
 min1 = arr[i];
 } else if (arr[i] < min2) {
 min2 = arr[i];
 }
 }
 return min1 * min2;
}
int main() {
 int arr[] = {2, 5, 7};
 int n = sizeof(arr) / sizeof(arr[0]);
 int result = minMaxProduct(arr, n);
 printf("Minimum possible value of maximum product: %d\n", result);
 return 0;
}