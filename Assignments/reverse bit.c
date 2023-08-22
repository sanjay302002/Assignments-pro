#include <stdio.h>
// Function to reverse bits of an integer
unsigned int reverseBits(unsigned int num) {
 unsigned int numOfBits = sizeof(num) * 8;
 unsigned int reversed = 0;
 for (unsigned int i = 0; i < numOfBits; i++) {
 if (num & (1 << i)) {
 reversed |= 1 << ((numOfBits - 1) - i);
 }
 }
 return reversed;
}
int main() {
 unsigned int n;
 printf("Enter an integer: ");
 scanf("%u", &n);
 unsigned int reversed = reverseBits(n);
 printf("Reversed binary representation as decimal: %u\n", reversed);
 return 0;
}