#include <stdio.h>
#include <stdbool.h>
bool isSubsequence(int arr1[], int n1, int arr2[], int n2) {
 int i = 0, j = 0;
 while (i < n1 && j < n2) {
 if (arr1[i] == arr2[j]) {
 i++;
 }
 j++;
 }
 return i == n1 || j == n2;
}
int main() {
 int arr1[] = {1, 2, 3};
 int arr2[] = {4, 5, 1, 2, 3, 6};
 int arr3[] = {4, 5, 6};
 int n1 = sizeof(arr1)/sizeof(arr1[0]);
 int n2 = sizeof(arr2)/sizeof(arr2[0]);
 int n3 = sizeof(arr3)/sizeof(arr3[0]);
 printf("Output for arr1 and arr2: %s\n", isSubsequence(arr1, n1, arr2, n2) ? "True" : 
"False");
 printf("Output for arr2 and arr1: %s\n", isSubsequence(arr2, n2, arr1, n1) ? "True" : 
"False");
 printf("Output for arr1 and arr3: %s\n", isSubsequence(arr1, n1, arr3, n3) ? "True" : 
"False");
 return 0;
}