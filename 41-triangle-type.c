#include <stdio.h>

int main() {
    float side1, side2, side3;
    printf("Enter three sides of triangle: ");
    scanf("%f %f %f", &side1, &side2, &side3);
    
    // Check if it's a valid triangle
    if(side1 + side2 <= side3 || side1 + side3 <= side2 || side2 + side3 <= side1) {
        printf("Invalid triangle! Sum of any two sides must be greater than third side.\n");
        return 1;
    }
    
    // Check triangle type
    if(side1 == side2 && side2 == side3) {
        printf("Equilateral triangle (all sides are equal).\n");
    }
    else if(side1 == side2 || side1 == side3 || side2 == side3) {
        printf("Isosceles triangle (two sides are equal).\n");
    }
    else {
        printf("Scalene triangle (all sides are different).\n");
    }
    
    return 0;
}