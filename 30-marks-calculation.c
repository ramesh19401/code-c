#include <stdio.h>

int main() {
    float subject1, subject2, subject3;
    float totalMarks, percentage, average;
    float maxMarks = 100.0; // Assuming each subject is out of 100
    
    printf("Enter marks for three subjects:\n");
    printf("Subject 1: ");
    scanf("%f", &subject1);
    printf("Subject 2: ");
    scanf("%f", &subject2);
    printf("Subject 3: ");
    scanf("%f", &subject3);
    
    totalMarks = subject1 + subject2 + subject3;
    average = totalMarks / 3;
    percentage = (totalMarks / (3 * maxMarks)) * 100;
    
    printf("\n--- Results ---\n");
    printf("Subject 1: %.2f\n", subject1);
    printf("Subject 2: %.2f\n", subject2);
    printf("Subject 3: %.2f\n", subject3);
    printf("Total Marks: %.2f out of %.0f\n", totalMarks, 3 * maxMarks);
    printf("Average: %.2f\n", average);
    printf("Percentage: %.2f%%\n", percentage);
    
    // Grade calculation
    if(percentage >= 90) {
        printf("Grade: A+\n");
    }
    else if(percentage >= 80) {
        printf("Grade: A\n");
    }
    else if(percentage >= 70) {
        printf("Grade: B+\n");
    }
    else if(percentage >= 60) {
        printf("Grade: B\n");
    }
    else if(percentage >= 50) {
        printf("Grade: C\n");
    }
    else {
        printf("Grade: F\n");
    }
    
    return 0;
}