#include <stdio.h>
// Function to find the maximum value of x such that N % x = N XOR x
int findMaxX(int N) {
 for (int x = N; x >= 0; x--) {
 if ((N % x) == (N ^ x)) {
 return x;
 }
 }
 return -1; // If no such x is found
}
int main() {
 int N;
 printf("Enter an integer N: ");
 scanf("%d", &N);
 int maxX = findMaxX(N);
 if (maxX != -1) {
 printf("Maximum value of x: %d\n", maxX);
 } else {
 printf("No such value of x exists.\n");
 }
 return 0;
}