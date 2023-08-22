#include <stdio.h>
int findSingleElement(int arr[], int size) {
 int result = 0;
 for (int i = 0; i < size; i++) {
 result ^= arr[i];
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
 int singleElement = findSingleElement(arr, size);
 printf("The single element in the array is: %d\n", singleElement);
 return 0;
}