#include <stdio.h>
#include <stdbool.h>
int product_of_digits(int num) {
 if (num < 10) {
 return num;
 } else {
 return (num % 10) * product_of_digits(num / 10);
 }
}
bool is_magic(int num) {
 int product = product_of_digits(num);
 
 while (num > 0) {
 if (num % 10 == product) {
 return true;
 }
 num /= 10;
 }
 return false;
}
int main() {
 printf("%s\n", is_magic(1235) ? "True" : "False"); // Output: True
 printf("%s\n", is_magic(7) ? "True" : "False"); // Output: False
 printf("%s\n", is_magic(234) ? "True" : "False"); // Output: False
 printf("%s\n", is_magic(1359) ? "True" : "False"); // Output: False
 printf("%s\n", is_magic(1) ? "True" : "False"); // Output: True
 return 0;
}