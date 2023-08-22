#include <stdio.h>
int fibonacci(int n) {
 if (n <= 0) {
 return 0;
 } else if (n == 1) {
 return 1;
 } else {
 return fibonacci(n - 1) + fibonacci(n - 2);
 }
}
int main() {
 printf("fibonacci(%d) = %d\n", 0, fibonacci(0)); // Output: fibonacci(0) = 0
 printf("fibonacci(%d) = %d\n", 1, fibonacci(1)); // Output: fibonacci(1) = 1
 printf("fibonacci(%d) = %d\n", 2, fibonacci(2)); // Output: fibonacci(2) = 1
 printf("fibonacci(%d) = %d\n", 6, fibonacci(6)); // Output: fibonacci(6) = 8
 printf("fibonacci(%d) = %d\n", 10, fibonacci(10));// Output: fibonacci(10) = 
55
 return 0;
}