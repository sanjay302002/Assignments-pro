#include <stdio.h>
int findElementIndex(int arr[], int n, int element) {
 for (int i = 0; i < n; i++) {
 if (arr[i] == element) {
 return i;
 }
 }
 return -1; // Element not found
}
int main() {
 int arr[] = {3, 5, 2, 9, 7, 1};
 int n = sizeof(arr) / sizeof(arr[0]);
 int element = 9;
 int index = findElementIndex(arr, n, element);
 if (index != -1) {
 printf("Element %d found at index: %d\n", element, index);
 } else {
 printf("Element %d not found in the array\n", element);
 }
 return 0;
}