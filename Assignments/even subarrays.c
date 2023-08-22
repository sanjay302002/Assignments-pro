#include <stdio.h>
int countSubarraysWithEvenSum(int arr[], int n) {
 int prefixSum[n + 1];
 prefixSum[0] = 0;
 for (int i = 1; i <= n; i++) {
 prefixSum[i] = prefixSum[i - 1] + arr[i - 1];
 }
 int evenSumCount = 0;
 for (int i = 0; i < n; i++) {
 for (int j = i + 1; j <= n; j++) {
 int subarraySum = prefixSum[j] - prefixSum[i];
 if (subarraySum % 2 == 0) {
 evenSumCount++;
 }
 }
 }
 return evenSumCount;
}
int main() {
 int arr[] = {1, 2, 3, 4};
 int n = sizeof(arr) / sizeof(arr[0]);
 int result = countSubarraysWithEvenSum(arr, n);
 printf("Number of subarrays with even sum: %d\n", result);
 return 0;
}