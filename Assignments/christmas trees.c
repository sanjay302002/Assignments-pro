#include <stdio.h>
#include <stdlib.h>
int countPairsWithHeightDifference(int arr[], int n, int k) {
 int count = 0;
 int* hashTable = (int*)calloc(1000001, sizeof(int));
 for (int i = 0; i < n; i++) {
 hashTable[arr[i]]++;
 }
 for (int i = 0; i < n; i++) {
 if (k == 0) {
 if (hashTable[arr[i]] >= 2) {
 count++;
 hashTable[arr[i]] -= 2;
 }
 } else if (arr[i] + k <= 1000000 && hashTable[arr[i] + k] > 0) {
 count++;
 }
 }
 free(hashTable);
 return count;
}
int main() {
 int arr[] = {6, 3, 9, 6, 5, 1};
 int n = sizeof(arr) / sizeof(arr[0]);
 int k = 3;
 int result = countPairsWithHeightDifference(arr, n, k);
 printf("Number of pairs with height difference %d: %d\n", k, result);
 return 0;
}
