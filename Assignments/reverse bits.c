#include <stdio.h>
// Function to reverse the binary representation of an integer
unsigned int reverseBinary(unsigned int num) {
 unsigned int reversed = 0;
 int bits = sizeof(num) * 8; // Number of bits in an integer
 
 for (int i = 0; i < bits; i++) {
 reversed <<= 1; // Left shift the reversed number
 reversed |= (num & 1); // Set the least significant bit of reversed
 num >>= 1; // Right shift the original number
 }
 
 return reversed;
}
int main() {
 unsigned int num;
 printf("Enter an integer: ");
 scanf("%u", &num);
 unsigned int reversed = reverseBinary(num);
 printf("Reversed binary representation: %u\n", reversed);
 return 0;
}