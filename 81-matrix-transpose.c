#include <stdio.h>

int main() {
    int rows, cols, i, j;
    
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    
    int matrix[rows][cols], transpose[cols][rows];
    
    printf("\nEnter elements of matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }
    
    // Calculate transpose
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }
    
    printf("\nOriginal matrix (%dx%d):\n", rows, cols);
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            printf("%4d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    printf("\nTranspose of matrix (%dx%d):\n", cols, rows);
    for(i = 0; i < cols; i++) {
        for(j = 0; j < rows; j++) {
            printf("%4d ", transpose[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}