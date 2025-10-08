#include <stdio.h>

int main() {
    float side;
    printf("Enter side length of cube: ");
    scanf("%f", &side);
    
    float volume = side * side * side;
    printf("Volume of cube: %.2f\n", volume);
    return 0;
}