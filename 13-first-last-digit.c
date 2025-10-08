#include <stdio.h>

int main() {
    int num, firstDigit, lastDigit;
    printf("Enter a 5-digit number: ");
    scanf("%d", &num);
    
    lastDigit = num % 10;
    firstDigit = num / 10000;
    
    printf("Sum of first and last digit: %d\n", firstDigit + lastDigit);
    return 0;
}