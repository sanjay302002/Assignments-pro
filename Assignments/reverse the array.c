#include <stdio.h>
void reverseArray(int arr[], int n) {
 int start = 0;
 int end = n - 1;
 while (start < end) {
 // Swap elements at start and end indices
 int temp = arr[start];
 arr[start] = arr[end];
 arr[end] = temp;
 start++;
 end--;
 }
}
int main() {
 int arr[] = {3, 5, 2, 9, 7, 1};
 int n = sizeof(arr) / sizeof(arr[0]);
 printf("Original array: ");
 for (int i = 0; i < n; i++) {
 printf("%d ", arr[i]);
 }
 reverseArray(arr, n);
 printf("\nReversed array: ");
 for (int i = 0; i < n; i++) {
 printf("%d ", arr[i]);
 }
 
 printf("\n");
 return 0;
}