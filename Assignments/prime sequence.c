#include <stdio.h>
#include <stdbool.h>
bool isPrime(int num) {
 if (num <= 1) {
 return false;
 }
 if (num <= 3) {
 return true;
 }
 if (num % 2 == 0 || num % 3 == 0) {
 return false;
 }
 for (int i = 5; i * i <= num; i += 6) {
 if (num % i == 0 || num % (i + 2) == 0) {
 return false;
 }
 }
 return true;
}
int countPrimeSubsequences(int A[], int N) {
 int count = 0;
 int totalSubsequences = 1 << N; // Total possible subsequences
 for (int mask = 1; mask < totalSubsequences; ++mask) {
 int subsequenceSum = 0;
 bool isPrimeSubsequence = true;
 for (int i = 0; i < N; ++i) {
 if (mask & (1 << i)) { // Check if i-th element is included in subsequence
 subsequenceSum += A[i];
 if (!isPrime(A[i])) {
 isPrimeSubsequence = false;
 break;
 }
 }
 }if (isPrimeSubsequence && isPrime(subsequenceSum)) {
 ++count;
 }
 }
 return count;
}
int main() {
 int N;
 printf("Enter the number of elements in the array: ");
 scanf("%d", &N);
if (N <= 0) {
 printf("Invalid input. Please enter a positive integer.\n");
 return 1; // Error exit code
 }
 int A[N];
 printf("Enter %d positive numbers: ", N);
 for (int i = 0; i < N; ++i) {
 scanf("%d", &A[i]);
 }
 int primeSubsequences = countPrimeSubsequences(A, N);
 printf("Number of Prime subsequences: %d\n", primeSubsequences);
 return 0;
}