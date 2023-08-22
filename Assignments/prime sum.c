#include<stdio.h>
#include<stdbool.h>
bool isPrime(int num) {
 if (num <= 1) {
 return false;
 }
 if (num <= 3) {
 return true;
 }
 if (num % 2 == 0 || num % 3 == 0) {
 return false;
 }
 for (int i = 5; i * i <= num; i += 6) {
 if (num % i == 0 || num % (i + 2) == 0) {
 return false;
 }
 }
 return true;
}
void findPrimePair(int even_num, int *prime1, int *prime2) {
 for (int i = 2; i <= even_num / 2; ++i) {
 if (isPrime(i) && isPrime(even_num - i)) {
 *prime1 = i;
 *prime2 = even_num - i;
 return;
 }
 }
 *prime1 = *prime2 = -1; // No prime pair found
}
int main() {
 int even_number;
 printf("Enter an even number greater than 2: ");
 scanf("%d", &even_number);
 if (even_number <= 2 || even_number % 2 != 0) {
 printf("Invalid input. Please enter a valid even number.\n");
 return 1; // Error exit code
 }
 int prime1, prime2;
 findPrimePair(even_number, &prime1, &prime2);
 if (prime1 != -1 && prime2 != -1) {
 printf("Prime pair: %d %d\n", prime1, prime2);
 } else {
 printf("No prime pair found for the given even number.\n");
 }
return 0;
}