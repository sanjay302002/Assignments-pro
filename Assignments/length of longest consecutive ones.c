#include <stdio.h>
int longestConsecutiveSequenceOfOnes(int arr[], int n) {
 int maxLength = 0;
 int currentLength = 0;
 for (int i = 0; i < n; i++) {
 if (arr[i] == 1) {
 currentLength++;
 if (currentLength > maxLength) {
 maxLength = currentLength;
 }
 } else {
 currentLength = 0;
 }
 }
 return maxLength;
}
int main() {
 int arr[] = {0, 1, 1, 0, 1, 1, 1, 0, 0, 1, 1};
 int n = sizeof(arr) / sizeof(arr[0]);
 int result = longestConsecutiveSequenceOfOnes(arr, n);
 printf("Length of longest consecutive sequence of 1s: %d\n", result);
 return 0;
}