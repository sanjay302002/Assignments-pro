#include <stdio.h>
unsigned long long factorial(int n) {
 if (n <= 1) {
 return 1;
 } else {
 return n * factorial(n - 1);
 }
}
int main() {
 printf("factorial(%d) = %llu\n", 0, factorial(0)); // Output: factorial(0) = 1
 printf("factorial(%d) = %llu\n", 1, factorial(1)); // Output: factorial(1) = 1
 printf("factorial(%d) = %llu\n", 5, factorial(5)); // Output: factorial(5) = 120
 printf("factorial(%d) = %llu\n", 10, factorial(10)); // Output: factorial(10) = 
3628800
 printf("factorial(%d) = %llu\n", 3, factorial(3)); // Output: factorial(3) = 6
 return 0;
}