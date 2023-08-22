
#include <stdio.h>
int count_subarrays(int arr[], int n, int threshold) {
 int count = 0;
 for (int i = 0; i < n; i++) {
 int bitwise_or = arr[i];
 if (bitwise_or >= threshold) {
 count++;
 }
 for (int j = i+1; j < n; j++) {
 bitwise_or |= arr[j];
 if (bitwise_or >= threshold) {
 count++;
 }
 }
 }
 return count;
}
int main() {
 int arr1[] = {1, 2, 3};
 int arr2[] = {2, 4, 6};
 int arr3[] = {1, 2, 3};
 int n1 = sizeof(arr1)/sizeof(arr1[0]);
 int n2 = sizeof(arr2)/sizeof(arr2[0]);
 int n3 = sizeof(arr3)/sizeof(arr3[0]);
 int threshold1 = 2;
 int threshold2 = 6;
 int threshold3 = 4;
 printf("Output for arr1: %d\n", count_subarrays(arr1, n1, threshold1));
 printf("Output for arr2: %d\n", count_subarrays(arr2, n2, threshold2));
 printf("Output for arr3: %d\n", count_subarrays(arr3, n3, threshold3));
 return 0;
}