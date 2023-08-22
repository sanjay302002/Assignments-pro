#include <stdio.h>
int countSpecialIndices(int arr[], int n) {
int totalSum = 0;
for (int i = 0; i < n; i++) {
totalSum += arr[i];
}
int leftSum = 0;
int specialIndicesCount = 0;
for (int i = 0; i < n; i++) {
totalSum -= arr[i];
if (leftSum == totalSum) {
specialIndicesCount++;
}
leftSum += arr[i];
}
return specialIndicesCount;
}
int main() {
int test_case[] = {1, 2, 3, 4, 5};
int n = sizeof(test_case) / sizeof(test_case[0]);
printf("%d\n", countSpecialIndices(test_case, n)); // Output: 0
return 0;
}