#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// Function to convert an integer to its binary string representation
char* intToBinaryString(int num) {
 char* binaryString = (char*)malloc(33 * sizeof(char));
 binaryString[32] = '\0'; // Null-terminate the string
 for (int i = 31; i >= 0; i--) {
 binaryString[i] = (num & 1) + '0';
 num >>= 1;
 }
 return binaryString;
}
// Function to compress the binary string by removing consecutive 0s
int compressBinaryString(char* binaryString) {
 int compressedLength = 0;
 int consecutiveZeros = 0;
 int length = strlen(binaryString);
 for (int i = 0; i < length; i++) {
 if (binaryString[i] == '0') {
 consecutiveZeros++;
 } else {
 if (consecutiveZeros > 0) {
 compressedLength++;
 }
 compressedLength++;
 consecutiveZeros = 0;
 }
 }
 return compressedLength;
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
 char compressedString[1000] = "";
 for (int i = 0; i < size; i++) {
 char* binaryString = intToBinaryString(arr[i]);
 strcat(compressedString, binaryString);
 free(binaryString);
 }
 int compressedLength = compressBinaryString(compressedString);
 printf("Length of the compressed string: %d\n", compressedLength);
 return 0;
}