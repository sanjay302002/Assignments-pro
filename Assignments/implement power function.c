#include <stdio.h>
double power (double x, int n) {
 if (n == 0) {
 return 1;
 } else if (n < 0) {
 return 1 / power (x, -n);
 } else if (n % 2 == 0) {
 double temp = power (x, n / 2);
 return temp * temp;
 } else {
 double temp = power (x, (n - 1) / 2);
 return x * temp * temp;
 }
}
int main () {
 printf ("%.6f\n", power (2, 3)); // Output: 8.000000
 printf ("%.6f\n", power (10, 0)); // Output: 1.000000
 printf ("%.6f\n", power (1, 100)); // Output: 1.000000
 printf ("%.6f\n", power (5, 5)); // Output: 3125.000000
 printf ("%.6f\n", power (2, -3)); // Output: 0.125000
 return 0;
}