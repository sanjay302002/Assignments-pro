#include <stdio.h>
#include <stdbool.h>
bool isSubsetSum(int set[], int n, int sum) {
 bool dp[n+1][sum+1];
 for (int i = 0; i <= n; i++) {
 dp[i][0] = true;
 }
 for (int j = 1; j <= sum; j++) {
 dp[0][j] = false;
 }
 for (int i = 1; i <= n; i++) {
 for (int j = 1; j <= sum; j++) {
 if (set[i-1] > j) {
 dp[i][j] = dp[i-1][j];
 } else {
 dp[i][j] = dp[i-1][j] || dp[i-1][j-set[i-1]];
 }
 }
 }
 return dp[n][sum];
}
int main() {
 int set1[] = {3, 34, 4, 12, 5, 2};
 int set2[] = {1, 2, 3, 4, 5};
 int set3[] = {1, 2, 3, 4, 5};
 int sum1 = 9;
 int sum2 = 10;
 int sum3 = 12;
 int n1 = sizeof(set1)/sizeof(set1[0]);
 int n2 = sizeof(set2)/sizeof(set2[0]);
 int n3 = sizeof(set3)/sizeof(set3[0]);
 printf("Output for set1: %s\n", isSubsetSum(set1, n1, sum1) ? "True" : "False");
 printf("Output for set2: %s\n", isSubsetSum(set2, n2, sum2) ? "True" : "False");
 printf("Output for set3: %s\n", isSubsetSum(set3, n3, sum3) ? "True" : "False");
 return 0;
}