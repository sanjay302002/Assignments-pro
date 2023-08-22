#include <stdio.h>
int countSubsets(int arr[], int n, int sum) {
 int dp[n+1][sum+1];
 for (int i = 0; i <= n; i++) {
 dp[i][0] = 1;
 }
 for (int j = 1; j <= sum; j++) {
 dp[0][j] = 0;
 }
 for (int i = 1; i <= n; i++) {
 for (int j = 1; j <= sum; j++) {
 if (arr[i-1] > j) {
 dp[i][j] = dp[i-1][j];
 } else {
 dp[i][j] = dp[i-1][j] + dp[i-1][j-arr[i-1]];
 }
 }
 }
 return dp[n][sum];
}
int main() {
 int arr1[] = {2, 3, 5, 6, 8, 10};
 int arr2[] = {1, 2, 3, 4, 5};
 int arr3[] = {1, 2, 3, 4, 5};
 int sum1 = 10;
 int sum2 = 10;
 int sum3 = 12;
 int n1 = sizeof(arr1)/sizeof(arr1[0]);
 int n2 = sizeof(arr2)/sizeof(arr2[0]);
 int n3 = sizeof(arr3)/sizeof(arr3[0]);
 printf("Output for arr1: %d\n", countSubsets(arr1, n1, sum1));
 printf("Output for arr2: %d\n", countSubsets(arr2, n2, sum2));
 printf("Output for arr3: %d\n", countSubsets(arr3, n3, sum3));
 return 0;
}