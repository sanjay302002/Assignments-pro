#include <stdio.h>
 int minPicksForIncreasingSubsequence(int arr[], int n) {
 int first = arr[0]; 
 int second = -1; 
 int picks = 0; 
 for (int i = 1; i < n; i++) {
 if (arr[i] > first) {
 if (second == -1 || arr[i] < second) {
 second = arr[i];
 } else {
 picks++;
 }
 } else {
 first = arr[i];
 }
 if (second != -1 && first != -1){
 return picks;
 }
 }
 return 0; 
}
int main() {
 int arr[] = {5, 6, 7, 1, 2, 8};
 int n = sizeof(arr) / sizeof(arr[0]);
 int minPicks = minPicksForIncreasingSubsequence(arr, n);
 printf("Minimum picks required: %d\n", minPicks);
 return 0;
}