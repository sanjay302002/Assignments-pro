#include <stdio.h>
#include <limits.h>
int divide(int dividend, int divisor) {
 if (divisor == 0) {
 printf("Error: Cannot divide by zero.\n");
 return INT_MAX;
 }
 
 if (dividend == INT_MIN && divisor == -1) {
 return INT_MAX; // Handle overflow case
 }
 
 int sign = (dividend < 0) ^ (divisor < 0) ? -1 : 1;
 long long ldividend = labs(dividend);
 long long ldivisor = labs(divisor);
 
 long long quotient = 0;
 while (ldividend >= ldivisor) {
 long long temp = ldivisor;
 long long multiple = 1;
 
 while (ldividend >= (temp << 1)) {
 temp <<= 1;
 multiple <<= 1;
 }
 
 ldividend -= temp;
 quotient += multiple;
 }
 
 return sign * quotient;
}
int main() {
 int dividend, divisor;
 printf("Enter the dividend: ");
 scanf("%d", &dividend);
 printf("Enter the divisor: ");
 scanf("%d", &divisor);
 int quotient = divide(dividend, divisor);
 printf("Quotient: %d\n", quotient);
 return 0;
}
