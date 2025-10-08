#include <stdio.h>

int main() {
    int rows, cols, i, j;
    
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    
    int matrix[rows][cols];
    int rowSum[rows], colSum[cols];
    
    // Initialize sums to 0
    for(i = 0; i < rows; i++) {
        rowSum[i] = 0;
    }
    for(j = 0; j < cols; j++) {
        colSum[j] = 0;
    }
    
    printf("\nEnter elements of matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }
    
    // Calculate row-wise and column-wise sums
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            rowSum[i] += matrix[i][j];  // Add to row sum
            colSum[j] += matrix[i][j];  // Add to column sum
        }
    }
    
    printf("\nMatrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            printf("%4d ", matrix[i][j]);
        }
        printf(" | Row Sum = %d\n", rowSum[i]);
    }
    
    // Print column sums
    printf("-----");
    for(j = 0; j < cols; j++) {
        printf("-----");
    }
    printf("\n");
    
    for(j = 0; j < cols; j++) {
        printf("%4d ", colSum[j]);
    }
    printf(" | Column Sums\n");
    
    printf("\nRow-wise sums:\n");
    for(i = 0; i < rows; i++) {
        printf("Row %d sum: %d\n", i+1, rowSum[i]);
    }
    
    printf("\nColumn-wise sums:\n");
    for(j = 0; j < cols; j++) {
        printf("Column %d sum: %d\n", j+1, colSum[j]);
    }
    
    return 0;
}