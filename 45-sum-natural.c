#include <stdio.h>

int main() {
    int n, i, sum = 0;
    printf("Enter value of N: ");
    scanf("%d", &n);
    
    for(i = 1; i <= n; i++) {
        sum += i;
    }
    
    printf("Sum of first %d natural numbers: %d\n", n, sum);
    printf("Formula verification: %d * (%d + 1) / 2 = %d\n", n, n, n * (n + 1) / 2);
    
    return 0;
}