#include <stdio.h>
int sum_of_digits (int num) {
 if (num < 10) {
 return num;
 } else {
 return num % 10 + sum_of_digits (num / 10);
 }
}
int main () {
 printf ("%d\n", sum_of_digits(123)); // Output: 6
 printf ("%d\n", sum_of_digits(999)); // Output: 27
 printf ("%d\n", sum_of_digits(1)); // Output: 1
 printf ("%d\n", sum_of_digits(987654321)); // Output: 45
 printf ("%d\n", sum_of_digits(1024)); // Output: 7
 return 0;
}
3. I