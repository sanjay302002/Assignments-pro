#include <stdio.h>
// Function to swap two elements in an array
void swap(int *a, int *b) {
 int temp = *a;
 *a = *b;
 *b = temp;
}
// Function to sort the colors in the array (red, white, blue) in a single pass
void sortColors(int colors[], int size) {
 int low = 0;
 int high = size - 1;
 int current = 0;
 while (current <= high) {
 if (colors[current] == 0) {
 swap(&colors[current], &colors[low]);
 low++;
 current++;
 } else if (colors[current] == 2) {
 swap(&colors[current], &colors[high]);
 high--;
 } else {
 current++;
 }
 }
}
int main() {
 int size;
 printf("Enter the size of the array: ");
 scanf("%d", &size);
 int colors[size];
 printf("Enter the colors (0 for red, 1 for white, 2 for blue):\n");
 for (int i = 0; i < size; i++) {
 scanf("%d", &colors[i]);
 }
 sortColors(colors, size);
 printf("Sorted colors array: ");
 for (int i = 0; i < size; i++) {
 printf("%d ", colors[i]);
 }
 printf("\n");
 return 0;
}