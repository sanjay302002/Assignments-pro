#include <stdio.h>
#include <math.h>
#include <limits.h>
// Function to find the maximum and minimum possible values of the 
expression
void findMaxMinExpression(int arr[], int size) {
 long long maxValue = LLONG_MIN;
 long long minValue = LLONG_MAX;
 for (int i = 0; i < size; i++) {
 for (int j = i + 1; j < size; j++) {
 long long expressionValue = (long long)pow(arr[i], 2) + (long 
long)pow(arr[j], 2) + (long long)pow(i - j, 2);
 if (expressionValue > maxValue) {
 maxValue = expressionValue;
 }
 if (expressionValue < minValue) {
 minValue = expressionValue;
 }
 }
 }
 printf("Maximum possible value of the expression: %lld\n", maxValue);
 printf("Minimum possible value of the expression: %lld\n", minValue);
}
int main() {
 int size;
 printf("Enter the size of the array: ");
 scanf("%d", &size);
 int arr[size];
 printf("Enter the elements of the array:\n");
 for (int i = 0; i < size; i++) {
 scanf("%d", &arr[i]);
 }
 findMaxMinExpression(arr, size);
 return 0;
}