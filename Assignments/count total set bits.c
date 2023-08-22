#include <stdio.h>
// Function to count the number of set bits in an integer
int countSetBits(int num) {
 int count = 0;
 while (num > 0) {
 count += num & 1; // Check the least significant bit
 num >>= 1; // Right shift to check the next bit
 }
 return count;
}
// Function to count the total set bits from 1 to N
int countTotalSetBits(int N) {
 int totalCount = 0;
 for (int i = 1; i <= N; i++) {
 totalCount += countSetBits(i);
 }
 return totalCount;
}
int main() {
 int N;
 printf("Enter an integer N: ");
 scanf("%d", &N);
 int totalSetBits = countTotalSetBits(N);
 printf("Total number of set bits from 1 to %d: %d\n", N, totalSetBits);
 return 0;
}
