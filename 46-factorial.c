#include <stdio.h>

int main() {
    int n, i;
    long long factorial = 1;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    if(n < 0) {
        printf("Factorial of negative number is not defined.\n");
        return 1;
    }
    
    for(i = 1; i <= n; i++) {
        factorial *= i;
    }
    
    printf("Factorial of %d = %lld\n", n, factorial);
    
    return 0;
}