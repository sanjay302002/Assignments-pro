#include <stdio.h>
#include <string.h>
int countSubarraysWithZ(char* S) {
 int n = strlen(S);
 int count = 0;
 for (int i = 0; i < n; i++) {
 if (S[i] == 'z') {
 int subarrayLength = 0;
 while (i < n && S[i] == 'z') {
 subarrayLength++;
 count += subarrayLength;
 i++;
 }
 }
 }
 return count;
}
int main() {
 char input[] = "abczdefz";
 int result = countSubarraysWithZ(input);
 printf("Number of contiguous subarrays with 'z': %d\n", result);
 return 0;
}