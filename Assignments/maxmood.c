#include <stdio.h>
// Function to find the maximum value of (arr[i] % arr[j])
int maxModValue(int arr[], int size) {
 int maxMod = 0;
 for (int i = 0; i < size; i++) {
 for (int j = i + 1; j < size; j++) {
 int modValue = arr[i] % arr[j];
 if (modValue > maxMod) {
 maxMod = modValue;
 }
 }
 }
 return maxMod;
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
 int maxValue = maxModValue(arr, size);
 printf("Maximum value of (arr[i] %% arr[j]): %d\n", maxValue);
 return 0;
}