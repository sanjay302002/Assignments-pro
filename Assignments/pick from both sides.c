#include <stdio.h>
int pickTwoNumbersSum(int arr[], int n, int target) {
int left = 0;
int right = n - 1;
while (left < right) {
int sum = arr[left] + arr[right];
if (sum == target) {
return sum;
} else if (sum < target) {
left++;
} else {
right--;
}
}
return -1; // No pair found
}
int main() {
int test_case_1[] = {1, 2, 3, 4, 5};
int n1 = sizeof(test_case_1) / sizeof(test_case_1[0]);
int target_1 = 9;
printf("%d\n", pickTwoNumbersSum(test_case_1, n1, target_1)); //
Output: 9
int test_case_2[] = {-2, 4, -6, 7, 9};
int n2 = sizeof(test_case_2) / sizeof(test_case_2[0]);
int target_2 = 1;
printf("%d\n", pickTwoNumbersSum(test_case_2, n2, target_2)); //
Output: -1
int test_case_3[] = {0, 1, 2, 3, 4, 5};
int n3 = sizeof(test_case_3) / sizeof(test_case_3[0]);
int target_3 = 6;
printf("%d\n", pickTwoNumbersSum(test_case_3, n3, target_3)); //
Output: 9
int test_case_4[] = {10, 20, 30, 40, 50};
int n4 = sizeof(test_case_4) / sizeof(test_case_4[0]);
int target_4 = 60;
printf("%d\n", pickTwoNumbersSum(test_case_4, n4, target_4)); //
Output: 110
int test_case_5[] = {-1, 0, 1};
int n5 = sizeof(test_case_5) / sizeof(test_case_5[0]);
int target_5 = 0;
printf("%d\n", pickTwoNumbersSum(test_case_5, n5, target_5)); //
Output: 0
return 0;
}