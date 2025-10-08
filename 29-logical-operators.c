#include <stdio.h>

int main() {
    int a = 5, b = 10, c = 0;
    
    printf("a = %d, b = %d, c = %d\n", a, b, c);
    printf("\nLogical AND (&&) operations:\n");
    printf("(a > 0) && (b > 0) = %d\n", (a > 0) && (b > 0));
    printf("(a > 0) && (c > 0) = %d\n", (a > 0) && (c > 0));
    
    printf("\nLogical OR (||) operations:\n");
    printf("(a > 10) || (b > 5) = %d\n", (a > 10) || (b > 5));
    printf("(a > 10) || (c > 5) = %d\n", (a > 10) || (c > 5));
    
    printf("\nLogical NOT (!) operations:\n");
    printf("!(a > b) = %d\n", !(a > b));
    printf("!(c) = %d\n", !(c));
    printf("!(a) = %d\n", !(a));
    
    return 0;
}