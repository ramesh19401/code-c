#include <stdio.h>

int main() {
    int matrix[2][2], i, j, largest;
    
    printf("Enter elements of 2x2 matrix:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("Element [%d][%d]: ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }
    
    // Initialize largest with first element
    largest = matrix[0][0];
    
    // Find the largest element
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            if(matrix[i][j] > largest) {
                largest = matrix[i][j];
            }
        }
    }
    
    printf("\n2x2 Matrix:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("%4d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    printf("\nLargest element in the matrix: %d\n", largest);
    
    // Show position(s) of largest element
    printf("Position(s) of largest element:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            if(matrix[i][j] == largest) {
                printf("Row %d, Column %d\n", i+1, j+1);
            }
        }
    }
    
    return 0;
}