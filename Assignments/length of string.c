#include <stdio.h>
#include <string.h>
int length_of_string(const char* s) {
 if (*s == '\0') {
 return 0;
 } else {
 return 1 + length_of_string(s + 1);
 }
}
int main() {
 printf("length_of_string(\"%s\") = %d\n", "hello", length_of_string("hello")); 
// Output: length_of_string("hello") = 5
 printf("length_of_string(\"%s\") = %d\n", "abcd", length_of_string("abcd")); 
// Output: length_of_string("abcd") = 4
 printf("length_of_string(\"%s\") = %d\n", "", length_of_string("")); // 
Output: length_of_string("") = 0
 printf("length_of_string(\"%s\") = %d\n", "racecar", 
length_of_string("racecar")); // Output: length_of_string("racecar") = 7
 printf("length_of_string(\"%s\") = %d\n", "12345", 
length_of_string("12345")); // Output: length_of_string("12345") = 5
 return 0;
}