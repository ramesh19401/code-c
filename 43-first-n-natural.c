#include <stdio.h>

int main() {
    int n, i;
    printf("Enter value of N: ");
    scanf("%d", &n);
    
    printf("First %d natural numbers:\n", n);
    for(i = 1; i <= n; i++) {
        printf("%d ", i);
    }
    printf("\n");
    
    return 0;
}