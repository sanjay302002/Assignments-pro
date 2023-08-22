#include <stdio.h>
// Function to find the two integers that occur only once
void findUniqueIntegers(int arr[], int size) {
 int xorResult = 0;
 // Calculate the XOR of all elements in the array
 for (int i = 0; i < size; i++) {
 xorResult ^= arr[i];
 }
 // Find the rightmost set bit in the XOR result
 int rightmostSetBit = 1;
 while ((rightmostSetBit & xorResult) == 0) {
 rightmostSetBit <<= 1;
 }
 int firstUnique = 0;
 int secondUnique = 0;
 // Divide the array into two groups based on the rightmost set bit
 for (int i = 0; i < size; i++) {
 if ((arr[i] & rightmostSetBit) == 0) {
 firstUnique ^= arr[i];
 } else {
 secondUnique ^= arr[i];
 }
 }
 printf("The two integers that occur only once are: %d and %d\n", firstUnique, 
secondUnique);
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
 findUniqueIntegers(arr, size);
 return 0;
}