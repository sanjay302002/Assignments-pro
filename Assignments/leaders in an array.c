#include <stdio.h>
#include <stdlib.h>
struct Stack {
 int capacity;
 int top;
 int* array;
};
struct Stack* createStack(int capacity) {
 struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
 stack->capacity = capacity;
 stack->top = -1;
 stack->array = (int*)malloc(stack->capacity * sizeof(int));
 return stack;
}
int isEmpty(struct Stack* stack) {
 return stack->top == -1;
}
void push(struct Stack* stack, int element) {
 stack->array[++stack->top] = element;
}
int pop(struct Stack* stack) {
 return stack->array[stack->top--];
}
void findLeaders(int arr[], int n) {
 struct Stack* stack = createStack(n);
 for (int i = n - 1; i >= 0; i--) {
 while (!isEmpty(stack) && stack->array[stack->top] <= arr[i]) {
 pop(stack);
 }
 if (isEmpty(stack)) {
 push(stack, arr[i]);
 }
 }
 printf("Leaders: ");
 while (!isEmpty(stack)) {
 printf("%d ", pop(stack));
 }
 printf("\n");
 free(stack->array);
 free(stack);
}
int main() {
 int arr[] = {16, 17, 4, 3, 5, 2};
 int n = sizeof(arr) / sizeof(arr[0]);
 findLeaders(arr, n);
 return 0;
}