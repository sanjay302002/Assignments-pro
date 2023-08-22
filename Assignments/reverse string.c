#include <stdio.h>
#include <string.h>
void reverse_string_helper(char* s, int start, int end) {
 if (start >= end) {
 return;
 }
 char temp = s[start];
 s[start] = s[end];
 s[end] = temp;
 
 reverse_string_helper(s, start + 1, end - 1);
}
void reverse_string(char* s) {
 int length = strlen(s);
 reverse_string_helper(s, 0, length - 1);
}
int main() {
 char str1[] = "hello";
 reverse_string(str1);
 printf("%s\n", str1); // Output: "olleh"
 char str2[] = "abcd";
 reverse_string(str2);
 printf("%s\n", str2); // Output: "dcba"
 char str3[] = "";
 reverse_string(str3);
 printf("%s\n", str3); // Output: ""
 char str4[] = "racecar";
 reverse_string(str4);
 printf("%s\n", str4); // Output: "racecar"
 char str5[] = "12345";
 reverse_string(str5);
 printf("%s\n", str5); // Output: "54321"
 return 0;
}