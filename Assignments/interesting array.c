#include <stdio.h>
// Function to check if an array is interesting
int isInteresting(int arr[], int size) {
 int xorSum = 0;
 for (int i = 0; i < size; i++) {
 xorSum ^= arr[i];
 }
 return xorSum == 0;
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
 if (isInteresting(arr, size)) {
 printf("The array is interesting.\n");
 } else {
 printf("The array is not interesting.\n");
 }
 return 0;
}