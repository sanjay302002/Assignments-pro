#include <stdio.h>
#include <stdlib.h>
// Function to merge two sorted subarrays and count inversions
long long mergeAndCount(int arr[], int temp[], int left, int mid, int right) {
 int i = left;
 int j = mid + 1;
 int k = left;
 long long invCount = 0;
 while (i <= mid && j <= right) {
 if (arr[i] <= arr[j]) {
 temp[k++] = arr[i++];
 } else {
 temp[k++] = arr[j++];
 invCount += (mid - i + 1); // Increment inversion count
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
 return invCount;
}
// Function to recursively sort and count inversions
long long mergeSortAndCount(int arr[], int temp[], int left, int right) {
 long long invCount = 0;
 if (left < right) {
 int mid = (left + right) / 2;
 invCount += mergeSortAndCount(arr, temp, left, mid);
 invCount += mergeSortAndCount(arr, temp, mid + 1, right);
 invCount += mergeAndCount(arr, temp, left, mid, right);
 }
 return invCount;
}
// Wrapper function to count inversions
long long countInversions(int arr[], int size) {
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
 long long inversions = countInversions(arr, size);
 printf("Number of inversions in the array: %lld\n", inversions);
 return 0;
}
