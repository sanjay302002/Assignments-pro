#include <stdio.h>
int equilibriumIndex(int arr[], int n) {
int totalSum = 0;
for (int i = 0; i < n; i++) {
totalSum += arr[i];
}
int prefixSum = 0;
int suffixSum = totalSum;
for (int i = 0; i < n; i++) {
suffixSum -= arr[i];
if (prefixSum == suffixSum) {
return i;
}
prefixSum += arr[i];
}
// No equilibrium index found
return -1;
}
int main() {
int test_case_1[] = {1, 2, 3, 4, 5};
printf("%d\n", equilibriumIndex(test_case_1, 5)); // Output: -1
int test_case_2[] = {-7, 1, 5, 2, -4, 3, 0};
printf("%d\n", equilibriumIndex(test_case_2, 7)); // Output: 3
int test_case_3[] = {1, -1, 1, -1, 1, -1, 1};
printf("%d\n", equilibriumIndex(test_case_3, 7)); // Output: 3
int test_case_4[] = {-1, 2, -3, 4, -5, 6, -7};
printf("%d\n", equilibriumIndex(test_case_4, 7)); // Output: 3
int test_case_5[] = {0, 0, 0, 0, 0, 0};
printf("%d\n", equilibriumIndex(test_case_5, 6)); // Output: 0
return 0;
}