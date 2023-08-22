#include <stdio.h>
// Function to remove all instances of the target integer in-place
int removeElement(int nums[], int size, int target) {
 int newIndex = 0;
 
 for (int i = 0; i < size; i++) {
 if (nums[i] != target) {
 nums[newIndex] = nums[i];
 newIndex++;
 }
 }
 
 return newIndex;
}
int main() {
 int size, target;
 printf("Enter the size of the array: ");
 scanf("%d", &size);
 int nums[size];
 printf("Enter the elements of the array:\n");
 for (int i = 0; i < size; i++) {
 scanf("%d", &nums[i]);
 }
 printf("Enter the target integer to remove: ");
 scanf("%d", &target);
 int newSize = removeElement(nums, size, target);
 printf("New length of the array after removal: %d\n", newSize);
 return 0;
}