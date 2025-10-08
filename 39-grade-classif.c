#include <stdio.h>

int main() {
    float marks;
    printf("Enter student marks (0-100): ");
    scanf("%f", &marks);
    
    if(marks < 0 || marks > 100) {
        printf("Invalid marks! Enter marks between 0-100.\n");
    }
    else if(marks >= 90) {
        printf("Grade: A+ (Excellent)\n");
    }
    else if(marks >= 80) {
        printf("Grade: A (Very Good)\n");
    }
    else if(marks >= 70) {
        printf("Grade: B+ (Good)\n");
    }
    else if(marks >= 60) {
        printf("Grade: B (Above Average)\n");
    }
    else if(marks >= 50) {
        printf("Grade: C (Average)\n");
    }
    else if(marks >= 40) {
        printf("Grade: D (Below Average)\n");
    }
    else {
        printf("Grade: F (Fail)\n");
    }
    
    return 0;
}