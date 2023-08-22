 #include <stdio.h>
 int findMax(int arr[], int n) {
 int max = arr[0];
 for (int i = 1; i < n; i++) {
 if (arr[i] > max) {
 max = arr[i];
 }
 }
 return max;
}
// Function to perform k rotations on the array
void rotateArray(int arr[], int n, int k) {
 for (int i = 0; i < k; i++) {
 int temp = arr[n - 1];
 for (int j = n - 1; j > 0; j--) {
 arr[j] = arr[j - 1];
 }
 arr[0] = temp;
 }
}
int main() {
 int arr[] = {4, 3, 6, 1, 2};
 int n = sizeof(arr) / sizeof(arr[0]);
 int k = 2;
 rotateArray(arr, n, k);
 int maxElement = findMax(arr, n);
 printf("Maximum element after %d rotations: %d\n", k, maxElement);
 return 0;
}