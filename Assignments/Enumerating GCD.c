#include <stdio.h>
long long gcd(long long a, long long b) {
 if (b == 0) {
 return a;
 }
 return gcd(b, a % b);
}
long long findGCDInRange(long long A, long long B) {
 // If A > B, swap A and B
 if (A > B) {
 long long temp = A;
 A = B;
 B = temp;
 }
 long long diff = B - A;
 return gcd(diff, A);
}
int main() {
 long long A, B;
 printf("Enter two numbers A and B: ");
 scanf("%lld %lld", &A, &B);
 if (A < 0 || B < 0) {
 printf("Invalid input. Please enter non-negative integers.\n");
 return 1; // Error exit code
 }
 long long result = findGCDInRange(A, B);
 printf("GCD of all numbers between %lld and %lld inclusive: %lld\n", A, B, result);
 return 0;
}
