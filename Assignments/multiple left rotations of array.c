#include <stdio.h>
 void leftRotate(int arr[], int n, int k) {
 k = k % n; 
 int temp[k];
 for (int i = 0; i < k; i++) {
 temp[i] = arr[i];
 }
 for (int i = 0; i < n - k; i++) {
 arr[i] = arr[i + k];
 }
 for (int i = 0; i < k; i++) {
 arr[n - k + i] = temp[i];
 }
}
int main() {
 int arr[] = {1, 2, 3, 4, 5};
 int n = sizeof(arr) / sizeof(arr[0]);
 int k = 2;
 leftRotate(arr, n, k);
 printf("Modified array after %d left rotations: ", k);
 for (int i = 0; i < n; i++) {
 printf("%d ", arr[i]);
 }
 printf("\n");
 return 0;
}