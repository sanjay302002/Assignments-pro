#include <stdio.h>
// Function to find the number of subarrays with bitwise OR equal to 1
int countSubarraysWithBitwiseOR(int arr[], int size) {
 int count = 0;
 for (int start = 0; start < size; start++) {
 int currentOR = 0;
 for (int end = start; end < size; end++) {
 currentOR |= arr[end];
 if (currentOR == 1) {
 count++;
 }
 }
 }
 return count;
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
 int subarraysWithOR1 = countSubarraysWithBitwiseOR(arr, size);
 printf("Number of subarrays with bitwise OR equal to 1: %d\n", 
subarraysWithOR1);
 return 0;
}
