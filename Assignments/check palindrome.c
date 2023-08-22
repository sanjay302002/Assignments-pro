#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>
bool is_palindrome_helper(const char* s, int start, int end) {
 if (start >= end) {
 return true;
 }
 if (tolower(s[start]) != tolower(s[end])) {
 return false;
 }
 return is_palindrome_helper(s, start + 1, end - 1);
}
bool is_palindrome(const char* s) {
 int length = strlen(s);
 return is_palindrome_helper(s, 0, length - 1);
}
int main() {
 printf("%s\n", is_palindrome("racecar") ? "True" : "False"); // Output: 
True
 printf("%s\n", is_palindrome("hello") ? "True" : "False"); // Output: 
False
 printf("%s\n", is_palindrome("") ? "True" : "False"); // Output: True
 printf("%s\n", is_palindrome("kayak") ? "True" : "False"); // Output: 
True
 printf("%s\n", is_palindrome("A man a plan a canal Panama") ? "True" : 
"False"); // Output: False
 return 0;
}
