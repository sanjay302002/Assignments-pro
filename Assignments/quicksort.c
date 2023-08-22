#include <stdio.h>
#include <limits.h>
// Function to find the maximum unsorted subarray
void findMaxUnsortedSubarray(int arr[], int size) {
 int left = 0, right = size - 1;
 // Find the left boundary
 while (left < size - 1 && arr[left] <= arr[left + 1]) {
 left++;
 }
 if (left == size - 1) {
 printf("The array is already sorted.\n");
 return;
 }
 // Find the right boundary
 while (right > 0 && arr[right] >= arr[right - 1]) {
 right--;
 }
 // Find the minimum and maximum elements within the subarray
 int min = INT_MAX, max = INT_MIN;
 for (int i = left; i <= right; i++) {
 if (arr[i] < min) {
 min = arr[i];
 }
 if (arr[i] > max) {
 max = arr[i];
 }
 }
 // Extend the left boundary
 while (left > 0 && arr[left - 1] > min) {
 left--;
 }
 // Extend the right boundary
 while (right < size - 1 && arr[right + 1] < max) {
 right++;
 }
 printf("Maximum unsorted subarray: ");
 for (int i = left; i <= right; i++) {
 printf("%d ", arr[i]);
 }
 printf("\n");
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
 findMaxUnsortedSubarray(arr, size);
 return 0;
}
