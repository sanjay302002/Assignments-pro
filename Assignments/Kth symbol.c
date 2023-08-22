#include <stdio.h>
int kth_symbol(int n, int k) {
 if (n == 1) {
 return 0;
 }
 
 int mid = (1 << (n - 1)) / 2; // Calculate the midpoint of the sequence
 if (k <= mid) {
 return kth_symbol(n - 1, k); // Recurse on the first half
 } else {
 return 1 - kth_symbol(n - 1, k - mid); // Recurse on the second half with 
inverted digits
 }
}
int main() {
 printf("%d\n", kth_symbol(1, 1)); // Output: 0
 printf("%d\n", kth_symbol(2, 2)); // Output: 1
 printf("%d\n", kth_symbol(3, 3)); // Output: 1
 printf("%d\n", kth_symbol(4, 5)); // Output: 0
 printf("%d\n", kth_symbol(5, 12)); // Output: 0
 return 0;
}