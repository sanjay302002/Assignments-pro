#include <stdio.h>
// Function to count the number of good days
int countGoodDays(int prices[], int size) {
 int goodDays = 0;
 
 for (int i = 0; i < size - 1; i++) {
 if ((prices[i] & prices[i + 1]) > 0) {
 goodDays++;
 }
 }
 
 return goodDays;
}
int main() {
 int size;
 printf("Enter the number of days: ");
 scanf("%d", &size);
 int prices[size];
 printf("Enter the stock prices for each day:\n");
 for (int i = 0; i < size; i++) {
 scanf("%d", &prices[i]);
 }
 int goodDays = countGoodDays(prices, size);
 printf("Number of good days: %d\n", goodDays);
 return 0;
}