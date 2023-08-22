#include <stdio.h>
int findLastSurvivor(int A[], int N) {
 int minHealth = A[0];
for (int i = 1; i < N; ++i) {
 minHealth = minHealth < A[i] ? minHealth : A[i];
 }
 return minHealth;
}
int main() {
 int N;
 printf("Enter the number of players: ");
 scanf("%d", &N);
 if (N <= 0) {
 printf("Invalid input. Please enter a positive integer.\n");
 return 1; // Error exit code
 }
 int A[N];
 printf("Enter the strengths of %d players: ", N);
 for (int i = 0; i < N; ++i) {
 scanf("%d", &A[i]);
 if (A[i] < 0) {
 printf("Invalid input. Please enter non-negative integers.\n");
 return 1; // Error exit code
 }
 }
 int result = findLastSurvivor(A, N);
 printf("Minimum health of the last surviving person: %d\n", result);
 return 0;
}