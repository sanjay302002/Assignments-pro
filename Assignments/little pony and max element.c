#include <stdio.h>
 void findMaxElementCountProduct(int arr[], int n) {
 int maxElement = arr[0];
 int maxCount = 1;
 for (int i = 1; i < n; i++) {
 if (arr[i] > maxElement) {
 maxElement = arr[i];
 maxCount = 1;
 } else if (arr[i] == maxElement) {
 maxCount++;
 }
 }
 int product = maxElement * maxCount;
 printf("Maximum element: %d, Count: %d, Product: %d\n", maxElement, 
maxCount, product);
}
int main() {
 int arr[] = {1, 2, 3, 2, 4, 2, 5, 2, 6, 2, 7, 2};
 int n = sizeof(arr) / sizeof(arr[0]);
 findMaxElementCountProduct(arr, n);
 return 0;
}
