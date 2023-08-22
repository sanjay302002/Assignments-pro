#include <stdio.h>
int countDivisors(int num) {
 int count = 0;
 for (int i = 1; i <= num; ++i) {
 if (num % i == 0) {
 count++;
 }
 }
 return count;
}
void count(int A[], int size, int result[]) {
 for (int i = 0; i < size; ++i) {
 result[i] = countDivisors(A[i]);
 }
}
int main() {
 int arr[50];
 int n;
 scanf("%d",&n);
 for(int i=0;i<n;i++){
 scanf("%d",&arr[i]);
 }
 int divisor_counts[n];
count(arr, n , divisor_counts);
printf("Divisor counts: ");
 for (int i = 0; i < n; ++i) {
 printf("%d ", divisor_counts[i]); }}