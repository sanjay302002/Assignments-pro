#include <stdio.h>
#include <string.h>
#define MOD 1000000007
int countSpecialSubsequences(char* s) {
 int n = strlen(s);
 int aCount = 0, gCount = 0, agCount = 0;
 for (int i = 0; i < n; i++) {
 if (s[i] == 'A') {
 aCount = (2 * aCount + 1) % MOD;
 } else if (s[i] == 'G') {
 gCount = (2 * gCount + aCount) % MOD;
 }
 agCount = (2 * agCount + gCount) % MOD;
 }
 return agCount;
}
int main() {
 char input[] = "AGGTA";
 int result = countSpecialSubsequences(input);
 printf("Number of special subsequences: %d\n", result);
 return 0;
}