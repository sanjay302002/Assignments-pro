#include <stdio.h>
int gcd(int a, int b) {
 if (b == 0) {
 return a;
 }
 return gcd(b, a % b);
}
int findMaxGCD(int A[], int N) {
 int maxGCD = 0;
 for (int i = 0; i < N; ++i) {
 int temp = A[i];
 int curGCD = 0;
 // Calculate GCD of remaining elements after removing A[i]
 for (int j = 0; j < N; ++j) {
 if (i != j) {
 if (curGCD == 0) {
 curGCD = A[j];
 } else {
 curGCD = gcd(curGCD, A[j]);
 }
 }
 }
 // Update maxGCD if necessary
 if (curGCD > maxGCD) {
 maxGCD = curGCD;
 }
 // Restore the original array
 A[i] = temp;
 }
 return maxGCD;
}
int main() {
 int N;
 printf("Enter the size of the array: ");
 scanf("%d", &N);
if (N <= 0) {
 printf("Invalid input. Please enter a positive integer.\n");
 return 1; // Error exit code
 }
int A[N];
 printf("Enter %d integers: ", N);
 for (int i = 0; i < N; ++i) {
 scanf("%d", &A[i]);
 }
 int maxGCD = findMaxGCD(A, N);
 printf("Maximum GCD after removing one element: %d\n", maxGCD);
 return 0;
}
