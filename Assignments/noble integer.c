#include <stdio.h>
// Function to find an integer satisfying the condition
int findInteger(int arr[], int size) {
 for (int i = 0; i < size; i++) {
 int count = 0;
 for (int j = 0; j < size; j++) {
 if (arr[j] > arr[i]) {
 count++;
 }
 }
 if (count == arr[i]) {
 return arr[i];
 }
 }
 return -1; // If no such integer is found
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
 int result = findInteger(arr, size);
 if (result != -1) {
 printf("An integer satisfying the condition: %d\n", result);
 } else {
 printf("No such integer found.\n");
 }
 return 0;
}
