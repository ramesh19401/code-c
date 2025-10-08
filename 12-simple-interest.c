#include <stdio.h>

int main() {
    float principal, time, rate, simpleInterest;
    printf("Enter principal amount: ");
    scanf("%f", &principal);
    printf("Enter time (in years): ");
    scanf("%f", &time);
    printf("Enter rate of interest: ");
    scanf("%f", &rate);
    
    simpleInterest = (principal * time * rate) / 100;
    printf("Simple Interest: %.2f\n", simpleInterest);
    return 0;
}