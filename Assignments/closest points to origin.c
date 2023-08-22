#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// Structure to represent a point
typedef struct Point {
 int x;
 int y;
} Point;
// Function to calculate the distance between a point and the origin
double distance(Point p) {
 return sqrt((double)p.x * p.x + (double)p.y * p.y);
}
// Max Heap implementation
typedef struct MaxHeap {
 Point *arr;
 int size;
 int capacity;
} MaxHeap;
MaxHeap* createMaxHeap(int capacity) {
 MaxHeap* heap = (MaxHeap*)malloc(sizeof(MaxHeap));
 heap->arr = (Point*)malloc(sizeof(Point) * capacity);
 heap->size = 0;
 heap->capacity = capacity;
 return heap;
}
void swap(Point *a, Point *b) {
 Point temp = *a;
 *a = *b;
 *b = temp;
}
void maxHeapify(MaxHeap* heap, int index) {
 int largest = index;
 int left = 2 * index + 1;
 int right = 2 * index + 2;
 if (left < heap->size && distance(heap->arr[left]) > distance(heap-
>arr[largest])) {
 largest = left;
 }
 if (right < heap->size && distance(heap->arr[right]) > distance(heap-
>arr[largest])) {
 largest = right;
 }
 if (largest != index) {
 swap(&heap->arr[index], &heap->arr[largest]);
 maxHeapify(heap, largest);
 }
}
void insertMaxHeap(MaxHeap* heap, Point p) {
 if (heap->size < heap->capacity) {
 heap->arr[heap->size] = p;
 heap->size++;
 int index = heap->size - 1;
 while (index > 0 && distance(heap->arr[index]) > distance(heap-
>arr[(index - 1) / 2])) {
 swap(&heap->arr[index], &heap->arr[(index - 1) / 2]);
 index = (index - 1) / 2;
 }
 } else if (distance(p) < distance(heap->arr[0])) {
 heap->arr[0] = p;
 maxHeapify(heap, 0);
 }
}
// Function to find the k closest points to the origin
void kClosestPoints(Point points[], int size, int k) {
 MaxHeap* maxHeap = createMaxHeap(k);
 for (int i = 0; i < size; i++) {
 insertMaxHeap(maxHeap, points[i]);
 }
 printf("The %d closest points to the origin:\n", k);
 for (int i = 0; i < k; i++) {
 printf("(%d, %d)\n", maxHeap->arr[i].x, maxHeap->arr[i].y);
 }
 free(maxHeap->arr);
 free(maxHeap);
}
int main() {
 int size, k;
 printf("Enter the number of points: ");
 scanf("%d", &size);
 Point points[size];
 printf("Enter the coordinates of the points:\n");
 for (int i = 0; i < size; i++) {
 scanf("%d %d", &points[i].x, &points[i].y);
 }
 printf("Enter the value of k: ");
 scanf("%d", &k);
 kClosestPoints(points, size, k);
 return 0;
}