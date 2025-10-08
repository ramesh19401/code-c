#include <stdio.h>

int main() {
    int n, i;
    printf("Enter value of N: ");
    scanf("%d", &n);
    
    printf("Natural numbers in reverse order from %d to 1:\n", n);
    for(i = n; i >= 1; i--) {
        printf("%d ", i);
    }
    printf("\n");
    
    return 0;
}