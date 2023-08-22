
#include <stdio.h>
// Function to partition the array around a pivot element
int partition(int arr[], int low, int high) {
 int pivot = arr[high];
 int i = low - 1;
 for (int j = low; j <= high - 1; j++) {
 if (arr[j] <= pivot) {
 i++;
 int temp = arr[i];
 arr[i] = arr[j];
 arr[j] = temp;
 }
 }
 int temp = arr[i + 1];
 arr[i + 1] = arr[high];
 arr[high] = temp;
 return i + 1;
}
// Function to find the kth smallest element using quickselect algorithm
int kthSmallest(int arr[], int low, int high, int k) {
 if (k > 0 && k <= high - low + 1) {
 int pivotIndex = partition(arr, low, high);
 if (pivotIndex - low == k - 1) {
 return arr[pivotIndex];
 }
 if (pivotIndex - low > k - 1) {
 return kthSmallest(arr, low, pivotIndex - 1, k);
 }
 return kthSmallest(arr, pivotIndex + 1, high, k - pivotIndex + low - 1);
 }
 return -1; // If k is out of bounds
}
int main() {
 int size, k;
 printf("Enter the size of the array: ");
 scanf("%d", &size);
 int arr[size];
 printf("Enter the elements of the array:\n");
 for (int i = 0; i < size; i++) {
 scanf("%d", &arr[i]);
 }
 printf("Enter the value of k: ");
 scanf("%d", &k);
 if (k >= 1 && k <= size) {
 int kthSmallestElement = kthSmallest(arr, 0, size - 1, k);
 printf("The %dth smallest element: %d\n", k, kthSmallestElement);
 } else {
 printf("Invalid value of k.\n");
 }
 return 0;
}
