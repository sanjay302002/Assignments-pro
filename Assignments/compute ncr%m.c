#include <stdio.h>
// Function to calculate factorial of a number
long long factorial(int num) {
 if (num == 0 || num == 1) {
 return 1;
 }
 return num * factorial(num - 1);
}
// Function to calculate nCr % m
long long nCrModM(int n, int r, int m) {
 if (r == 0) {
 return 1;
 }
 long long num = factorial(n);
 long long denom = (factorial(n - r) * factorial(r)) % m;
 // Calculating modular inverse using Fermat's Little Theorem
 long long inverse = 1;
 for (int i = 1; i <= denom; ++i) {
 inverse = (inverse * i) % m;
 }
 long long result = (num * inverse) % m;
 return result;
}
int main() {
 int A, B, C;
 printf("Enter three integers A, B, and C: ");
 scanf("%d %d %d", &A, &B, &C);
 if (A < 0 || B < 0 || C <= 0) {
 printf("Invalid input. Please enter valid positive integers.\n");
 return 1; // Error exit code
 }
 long long nCrModResult = nCrModM(A, B, C);
 printf("Value of nCr %% m: %lld\n", nCrModResult);
 return 0;
}