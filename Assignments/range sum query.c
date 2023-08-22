#include <stdio.h>
#include <stdlib.h>
typedef struct {
int *tree;
int size;
} NumArray;
NumArray *numArrayCreate(int *nums, int numsSize) {
NumArray *obj = (NumArray *)malloc(sizeof(NumArray));
obj->size = numsSize;
if (numsSize > 0) {
obj->tree = (int *)malloc(sizeof(int) * (2 * numsSize));
for (int i = 0; i < numsSize; i++) {
obj->tree[i + numsSize] = nums[i];
}
for (int i = numsSize - 1; i > 0; i--) {
obj->tree[i] = obj->tree[2 * i] + obj->tree[2 * i + 1];
}
} else {
obj->tree = NULL;
}
return obj;
}
void update(NumArray *obj, int i, int val) {
int n = obj->size;
i += n;
obj->tree[i] = val;
while (i > 1) {
i /= 2;
obj->tree[i] = obj->tree[2 * i] + obj->tree[2 * i + 1];
}
}
int sumRange(NumArray *obj, int i, int j) {
int n = obj->size;
i += n;
j += n;
int sum = 0;
while (i <= j) {
if (i % 2 == 1) {
sum += obj->tree[i];
i++;
}
if (j % 2 == 0) {
sum += obj->tree[j];
j--;
}
i /= 2;
j /= 2;
}
return sum;
}
void numArrayFree(NumArray *obj) {
if (obj->tree != NULL) {
free(obj->tree);
}
free(obj);
}
int main() {
int nums[] = {1, 3, 5};
int numsSize = sizeof(nums) / sizeof(nums[0]);
NumArray *obj = numArrayCreate(nums, numsSize);
printf("Sum Range (0, 2): %d\n", sumRange(obj, 0, 2)); // Output: 9
update(obj, 1, 2);
printf("Sum Range (0, 2): %d\n", sumRange(obj, 0, 2)); // Output: 8
numArrayFree(obj);
return 0;
}