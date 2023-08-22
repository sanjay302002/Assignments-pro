#include <stdio.h>
int minSwitches(int A[], int N, int B) {
 int count = 0;
A[i:i+B-1]
 for (int i = 0; i < B; i++) {
 if (A[i] == 0) {
 count++;
 }
 }
 int minSwitches = count; 
 for (int i = B; i < N; i++) {
 if (A[i - B] == 0) {
 count--;
 }
 if (A[i] == 0) {
 count++;
 }
 if (count < minSwitches) {
 minSwitches = count;
 }
 }
 return minSwitches;
}
int main() {
 int A[] = {1, 0, 1, 0, 1};
 int N = sizeof(A) / sizeof(A[0]);
 int B = 2;
 int result = minSwitches(A, N, B);
 printf("Minimum number of switches required: %d\n", result);
 return 0;
}