#include <stdio.h>
int count_2_subsequences(int arr[], int n) {
 int count = 0;
 for (int i = 0; i < n; i++) {
 for (int j = i+1; j < n; j++) {
 if (arr[i] < arr[j]) {
 count++;
 }
 }
 }
 return count;
}
int main() {
 int arr1[] = {1, 2, 3, 4, 5};
 int arr2[] = {5, 4, 3, 2, 1};
 int arr3[] = {1, 3, 2, 4, 5};
 int n1 = sizeof(arr1)/sizeof(arr1[0]);
 int n2 = sizeof(arr2)/sizeof(arr2[0]);
 int n3 = sizeof(arr3)/sizeof(arr3[0]);
 printf("Output for arr1: %d\n", count_2_subsequences(arr1, n1));
 printf("Output for arr2: %d\n", count_2_subsequences(arr2, n2));
 printf("Output for arr3: %d\n", count_2_subsequences(arr3, n3));
 return 0;
}
