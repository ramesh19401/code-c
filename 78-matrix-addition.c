#include <stdio.h>

int main() {
    int rows, cols, i, j;
    
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    
    int matrixA[rows][cols], matrixB[rows][cols], sum[rows][cols];
    
    printf("\nEnter elements of first matrix A:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            printf("A[%d][%d]: ", i+1, j+1);
            scanf("%d", &matrixA[i][j]);
        }
    }
    
    printf("\nEnter elements of second matrix B:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            printf("B[%d][%d]: ", i+1, j+1);
            scanf("%d", &matrixB[i][j]);
        }
    }
    
    // Calculate sum of matrices
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            sum[i][j] = matrixA[i][j] + matrixB[i][j];
        }
    }
    
    printf("\nMatrix A:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            printf("%4d ", matrixA[i][j]);
        }
        printf("\n");
    }
    
    printf("\nMatrix B:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            printf("%4d ", matrixB[i][j]);
        }
        printf("\n");
    }
    
    printf("\nSum of matrices (A + B):\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            printf("%4d ", sum[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}