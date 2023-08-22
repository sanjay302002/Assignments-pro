#include <stdio.h>
 int maxConsecutivePositiveSum(int arr[], int n) {
 int maxSum = 0;
 int currentSum = 0;
 for (int i = 0; i < n; i++) {
 if (arr[i] > 0) {
 currentSum += arr[i];
 if (currentSum > maxSum) {
 maxSum = currentSum;
 }
 } else {
 currentSum = 0;
 }
 }
 return maxSum;
}
int main() {
 int arr[] = {2, 3, -8, 7, -1, 2, 3};
 int n = sizeof(arr) / sizeof(arr[0]);
 int result = maxConsecutivePositiveSum(arr, n);
 printf("Maximum sum of consecutive positive integers: %d\n", result);
 return 0;
}