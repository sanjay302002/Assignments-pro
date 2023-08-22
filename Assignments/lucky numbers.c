#include <stdio.h>
#include <stdbool.h>
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
int countDistinctPrimeDivisors(int num) {
 int count = 0;
 for (int i = 2; i <= num; ++i) {
 if (num % i == 0 && isPrime(i)) {
 ++count;
 while (num % i == 0) {
 num /= i;
 }
 }
 }
 return count;
}
int countLuckyNumbersInRange(int A) {
 int luckyCount = 0;
 for (int num = 1; num <= A; ++num) {
 if (countDistinctPrimeDivisors(num) == 2) {
 ++luckyCount;
 }
 }
 return luckyCount;
}
int main() {
 int A;
 printf("Enter a number (A): ");
 scanf("%d", &A);
 if (A < 1) {
 printf("Invalid input. Please enter a positive integer.\n");
 return 1; // Error exit code
 }
 int luckyCount = countLuckyNumbersInRange(A);
 printf("Count of lucky numbers between 1 and %d: %d\n", A, luckyCount);
 return 0;
}