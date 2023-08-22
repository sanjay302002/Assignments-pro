#include <stdio.h>
int countGoodPairs(int arr[], int n) {
 int count = 0;
 for (int i = 0; i < n; i++) {
 for (int j = i + 1; j < n; j++) {
 if (arr[i] > arr[j]) {
 count++;
 }
 }
 }
 return count;
}
int main() {
 int arr[] = {2, 1, 5, 4, 3};
 int n = sizeof(arr) / sizeof(arr[0]);
 int goodPairs = countGoodPairs(arr, n);
 printf("Count of good pairs: %d\n", goodPairs);
 return 0;
}