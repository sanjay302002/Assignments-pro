#include <stdio.h>
int findSecondLargest(int arr[], int n) {
 if (n < 2) {
 return -1
 }
 int firstLargest = arr[0];
 int secondLargest = arr[0];
 for (int i = 1; i < n; i++) {
 if (arr[i] > firstLargest) {
 secondLargest = firstLargest;
 firstLargest = arr[i];
 } else if (arr[i] > secondLargest && arr[i] != firstLargest) {
 secondLargest = arr[i];
 }
 }
 if (secondLargest == firstLargest) {
 return -1; // No second largest element
 }
 return secondLargest;
}
int main() {
 int arr[] = {1, 5, 2, 4, 3};
 int n = sizeof(arr) / sizeof(arr[0]);
 int secondLargest = findSecondLargest(arr, n);
 if (secondLargest != -1) {
 printf("Second largest element: %d\n", secondLargest);
 } else {
 printf("No second largest element\n");
 }
 return 0;
}
