#include <stdio.h>
#include <stdlib.h>
// Function to find the length of the longest arithmetic progression
int longestArithSeqLength(int arr[], int size) {
 if (size <= 2) {
 return size;
 }
 int maxLen = 2; // Minimum length is 2
 // Initialize a dynamic programming table to store the length of APs ending at 
each index
 int dp[size][size];
 
 // Fill the dp table
 for (int i = 0; i < size; i++) {
 for (int j = 0; j < size; j++) {
 dp[i][j] = 2; // All pairs start with a minimum length of 2
 }
 }
 // Iterate through all pairs of elements
 for (int i = 0; i < size; i++) {
 for (int j = i + 1; j < size; j++) {
 int diff = arr[j] - arr[i];
 // Find the previous element in the AP
 int prev = arr[i] - diff;
 for (int k = 0; k < i; k++) {
 if (arr[k] == prev) {
 dp[i][j] = dp[k][i] + 1;
 break;
 }
 }
 maxLen = (maxLen > dp[i][j]) ? maxLen : dp[i][j];
 }
 }
 return maxLen;
}
int main() {
 int size;
 printf("Enter the size of the array: ");
 scanf("%d", &size);
 int arr[size];
 printf("Enter the elements of the array:\n");
 for (int i = 0; i < size; i++) {
 scanf("%d", &arr[i]);
 }
 int length = longestArithSeqLength(arr, size);
 printf("Length of the longest arithmetic progression: %d\n", length);
 return 0;
}
