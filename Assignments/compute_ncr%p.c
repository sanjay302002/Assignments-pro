#include <stdio.h>
// Function to calculate factorial of a number
long long factorial(int num) {
 if (num == 0 || num == 1) {
 return 1;
 }
 return num * factorial(num - 1);
}
// Function to calculate modular inverse using Fermat's Little Theorem
long long modInverse(int num, int prime) {
 long long result = 1;
 for (int i = 1; i <= prime - 2; ++i) {
 result = (result * num) % prime;
 }
 return result;
}
// Function to calculate nCr % p
long long nCrModP(int n, int r, int p) {
 if (r == 0) {
 return 1;
 }
 long long num = factorial(n);
 long long denom = (factorial(n - r) * factorial(r)) % p;
 // Calculating modular inverses for the denominator
 long long inverseDenom = modInverse(denom, p);
 long long result = (num * inverseDenom) % p;
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
 long long nCrModPResult = nCrModP(A, B, C);
 printf("Value of nCr %% p: %lld\n", nCrModPResult);
 return 0;
}