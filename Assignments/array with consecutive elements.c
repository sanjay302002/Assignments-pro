#include <stdio.h>
#include <stdbool.h>
// Function to check whether the array contains all consecutive elements
bool containsConsecutive(int arr[], int size) {
 if (size < 2) {
 return false; // Array with less than 2 elements cannot have consecutive 
elements
 }
 int min = arr[0];
 int max = arr[0];
 // Find the minimum and maximum elements in the array
 for (int i = 1; i < size; i++) {
 if (arr[i] < min) {
 min = arr[i];
 }
 if (arr[i] > max) {
 max = arr[i];
 }
 }
 // Calculate the expected sum of consecutive elements
 int expectedSum = (max - min + 1) * (max + min) / 2;
 // Calculate the actual sum of the array elements
 int actualSum = 0;
 for (int i = 0; i < size; i++) {
 actualSum += arr[i];
 }
 return expectedSum == actualSum;
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
 bool hasConsecutive = containsConsecutive(arr, size);
 if (hasConsecutive) {
 printf("The array contains all consecutive elements.\n");
 } else {
 printf("The array does not contain all consecutive elements.\n");
 }
 return 0;
}