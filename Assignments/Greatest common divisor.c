#include <stdio.h>
int gcd(int a, int b) {
 if (b == 0) {
 return a;
 }
 return gcd(b, a % b);
}
int main() {
 int A, B;
 printf("Enter two non-negative integers A and B: ");
 scanf("%d %d", &A, &B);
 if (A < 0 || B < 0) {
 printf("Invalid input. Please enter non-negative integers.\n");
 return 1; // Error exit code
 }
 int result = gcd(A, B);
 printf("GCD of %d and %d: %d\n", A, B, result);
 return 0;
}
