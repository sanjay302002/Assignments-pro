#include <stdio.h>
// Function to check if there exists a subset with bitwise OR equal to target sum
int isSubsetWithOR(int arr[], int size, int target) {
 int possible[1024] = {0}; // Using 10 bits as maximum possible set bits in an 
integer
 
 for (int i = 0; i < size; i++) {
 for (int j = 1023; j >= 0; j--) {
 if (possible[j]) {
 possible[j | arr[i]] = 1;
 }
 }
 possible[arr[i]] = 1;
 }
 
 return possible[target];
}
int main() {
 int size, target;
 printf("Enter the size of the array: ");
 scanf("%d", &size);
 int arr[size];
 printf("Enter the elements of the array:\n");
 for (int i = 0; i < size; i++) {
 scanf("%d", &arr[i]);
 }
 printf("Enter the target sum: ");
 scanf("%d", &target);
 if (isSubsetWithOR(arr, size, target)) {
 printf("There exists a subset with bitwise OR equal to the target sum.\n");
 } else {
 printf("No such subset exists.\n");
 }
 return 0;
}