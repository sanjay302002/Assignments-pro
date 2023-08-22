#include <stdio.h>
#include <stdlib.h>
// Function to merge two sorted subarrays and count reverse pairs
long long mergeAndCount(int arr[], int temp[], int left, int mid, int right) {
 int i = left;
 int j = mid + 1;
 int k = left;
 long long reverseCount = 0;
 while (i <= mid && j <= right) {
 if ((long long)arr[i] > 2 * (long long)arr[j]) {
 reverseCount += (mid - i + 1); // Increment reverse pair count
 j++;
 } else {
 i++;
 }
 }
 i = left;
 j = mid + 1;
 while (i <= mid && j <= right) {
 if (arr[i] <= arr[j]) {
 temp[k++] = arr[i++];
 } else {
 temp[k++] = arr[j++];
 }
 }
 while (i <= mid) {
 temp[k++] = arr[i++];
 }
 while (j <= right) {
 temp[k++] = arr[j++];
 }
 for (i = left; i <= right; i++) {
 arr[i] = temp[i];
 }
 return reverseCount;
}
// Function to recursively sort and count reverse pairs
long long mergeSortAndCount(int arr[], int temp[], int left, int right) {
 long long reverseCount = 0;
 if (left < right) {
 int mid = (left + right) / 2;
 reverseCount += mergeSortAndCount(arr, temp, left, mid);
 reverseCount += mergeSortAndCount(arr, temp, mid + 1, right);
 reverseCount += mergeAndCount(arr, temp, left, mid, right);
 }
 return reverseCount;
}
// Wrapper function to count reverse pairs
long long countReversePairs(int arr[], int size) {
 int temp[size];
 return mergeSortAndCount(arr, temp, 0, size - 1);
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
 long long reversePairs = countReversePairs(arr, size);
 printf("Number of reverse pairs in the array: %lld\n", reversePairs);
 return 0;
}