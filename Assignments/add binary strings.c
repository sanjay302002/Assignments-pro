#include <stdio.h>
#include <string.h>
// Function to add two binary strings
char* addBinaryStrings(const char* a, const char* b) {
 int maxLen = (strlen(a) > strlen(b)) ? strlen(a) : strlen(b);
 char* result = (char*)malloc((maxLen + 2) * sizeof(char));
 result[maxLen + 1] = '\0'; // Null-terminate the result string
 int carry = 0;
 int i = strlen(a) - 1;
 int j = strlen(b) - 1;
 int k = maxLen; // Index for the result string
 while (i >= 0 || j >= 0 || carry) {
 int sum = carry;
 if (i >= 0)
 sum += a[i--] - '0';
 if (j >= 0)
 sum += b[j--] - '0';
 carry = sum / 2;
 result[k--] = (sum % 2) + '0';
 }
 return &result[k + 1];
}
int main() {
 char binary1[100], binary2[100];
 printf("Enter the first binary string: ");
 scanf("%s", binary1);
 printf("Enter the second binary string: ");
 scanf("%s", binary2);
 char* sumBinary = addBinaryStrings(binary1, binary2);
 printf("Sum of binary strings: %s\n", sumBinary);
 free(sumBinary); // Free the dynamically allocated memory
 return 0;
}