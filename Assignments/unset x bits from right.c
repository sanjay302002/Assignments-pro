#include <stdio.h>
// Function to unset the last x bits of n
unsigned int unsetLastXBits(unsigned int n, int x) {
 return n & (~((1 << x) - 1));
}
int main() {
 unsigned int n;
 int x;
 printf("Enter a non-negative integer n: ");
 scanf("%u", &n);
 printf("Enter a positive integer x: ");
 scanf("%d", &x);
 if (x > 0) {
 unsigned int result = unsetLastXBits(n, x);
 printf("Result after unsetting the last %d bits: %u\n", x, result);
 } else {
 printf("x should be a positive integer.\n");
 }
 return 0;
}