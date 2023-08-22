#include <stdio.h>
#include <stdlib.h>
// Function to distribute chocolates among students to minimize the difference
int distributeChocolates(int packets[], int n, int k) {
 if (n == 0 || k == 0) {
 return 0;
 }
 // Sort the packets array
 for (int i = 0; i < n; i++) {
 for (int j = i + 1; j < n; j++) {
 if (packets[i] > packets[j]) {
 int temp = packets[i];
 packets[i] = packets[j];
 packets[j] = temp;
 }
 }
 }
 int minDifference = packets[n - 1] - packets[0];
 for (int i = 0; i <= n - k; i++) {
 int currentDifference = packets[i + k - 1] - packets[i];
 if (currentDifference < minDifference) {
 minDifference = currentDifference;
 }
 }
 return minDifference;
}
int main() {
 int n, k;
 printf("Enter the number of packets: ");
 scanf("%d", &n);
 int packets[n];
 printf("Enter the number of chocolates in each packet:\n");
 for (int i = 0; i < n; i++) {
 scanf("%d", &packets[i]);
 }
 printf("Enter the number of students: ");
 scanf("%d", &k);
 int minDifference = distributeChocolates(packets, n, k);
 printf("Minimum difference between chocolates: %d\n", minDifference);
 return 0;
}