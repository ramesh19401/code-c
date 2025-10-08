#include <stdio.h>
#include <math.h>

int main() {
    float base, exponent, result;
    printf("Enter base: ");
    scanf("%f", &base);
    printf("Enter exponent: ");
    scanf("%f", &exponent);
    
    result = pow(base, exponent);
    printf("%.2f raised to power %.2f = %.2f\n", base, exponent, result);
    return 0;
}