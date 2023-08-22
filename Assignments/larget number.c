#include<stdio.h>
#include <stdlib.h>
#include <string.h>
// Custom comparison function to compare two integers as strings
int compare(const void *a, const void *b) {
 char num1[20];
 char num2[20];
 sprintf(num1, "%d", *(const int *)a);
 sprintf(num2, "%d", *(const int *)b);
 char concat1[40];
 char concat2[40];
 strcpy(concat1, num1);
 strcat(concat1, num2);
 
 strcpy(concat2, num2);
 strcat(concat2, num1);
 
 return strcmp(concat2, concat1);
}
// Function to arrange the numbers to form the largest number
void largestNumber(int nums[], int size) {
 qsort(nums, size, sizeof(int), compare);
}
int main() {
 int size;
 printf("Enter the size of the array: ");
 scanf("%d", &size);
 int nums[size];
 printf("Enter the elements of the array:\n");
 for (int i = 0; i < size; i++) {
 scanf("%d", &nums[i]);
 }
 largestNumber(nums, size);
 printf("Largest number formed: ");
 for (int i = 0; i < size; i++) {
 printf("%d", nums[i]);
 }
 printf("\n");
 return 0;
}