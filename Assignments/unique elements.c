#include <stdio.h>
#include <stdbool.h>
// Function to check if an element is already in the result array
bool contains(int result[], int size, int element) {
 for (int i = 0; i < size; i++) {
 if (result[i] == element) {
 return true;
 }
 }
 return false;
}
// Function to remove duplicates and return a new list with unique elements
int* removeDuplicates(int arr[], int size, int* newSize) {
 int* result = (int*)malloc(size * sizeof(int));
 *newSize = 0;
 for (int i = 0; i < size; i++) {
 if (!contains(result, *newSize, arr[i])) {
 result[*newSize] = arr[i];
 (*newSize)++;
 }
 }
 return result;
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
 int newSize;
 int* uniqueArray = removeDuplicates(arr, size, &newSize);
 printf("Unique elements in the array: ");
 for (int i = 0; i < newSize; i++) {
 printf("%d ", uniqueArray[i]);
 }
 printf("\n");
 free(uniqueArray); // Free the allocated memory
 return 0;
}