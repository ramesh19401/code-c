#include <stdio.h>

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    if(num2 == 0) {
        printf("Division by zero is not allowed.\n");
    }
    else if(num1 % num2 == 0) {
        printf("%d is divisible by %d\n", num1, num2);
    }
    else {
        printf("%d is not divisible by %d\n", num1, num2);
        printf("Remainder: %d\n", num1 % num2);
    }
    return 0;
}