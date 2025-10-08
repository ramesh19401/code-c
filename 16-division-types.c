#include <stdio.h>

int main() {
    int a = 15, b = 4;
    float x = 15.0, y = 4.0;
    
    printf("Integer division: %d / %d = %d\n", a, b, a/b);
    printf("Floating-point division: %.1f / %.1f = %.2f\n", x, y, x/y);
    printf("Mixed division: %d / %.1f = %.2f\n", a, y, a/y);
    return 0;
}