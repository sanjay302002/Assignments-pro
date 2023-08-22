#include <stdio.h>
// Function to count the number of 1 bits in an unsigned integer
int countSetBits(unsigned int num) {
 int count = 0;
 while (num > 0) {
 count += num & 1; // Check the least significant bit
 num >>= 1; // Right shift to check the next bit
 }
 return count;
}
int main() {
 unsigned int num;
 printf("Enter an unsigned integer: ");
 scanf("%u", &num);
 int setBitsCount = countSetBits(num);
 printf("Number of set bits in %u: %d\n", num, setBitsCount);
 return 0;
}