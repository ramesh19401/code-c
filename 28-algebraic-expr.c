#include <stdio.h>

int main() {
    int a, b, result;
    printf("Enter values of a and b: ");
    scanf("%d %d", &a, &b);
    
    result = (a * a) + (b * b) + (2 * a * b);
    
    printf("a² + b² + 2ab = %d² + %d² + 2×%d×%d = %d\n", a, b, a, b, result);
    printf("Note: This equals (a + b)² = (%d + %d)² = %d\n", a, b, (a+b)*(a+b));
    return 0;
}