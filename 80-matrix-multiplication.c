#include <stdio.h>

int main() {
    int rowsA, colsA, rowsB, colsB, i, j, k;
    
    printf("Enter rows and columns of first matrix A: ");
    scanf("%d %d", &rowsA, &colsA);
    
    printf("Enter rows and columns of second matrix B: ");
    scanf("%d %d", &rowsB, &colsB);
    
    // Check if multiplication is possible
    if(colsA != rowsB) {
        printf("Matrix multiplication not possible!\n");
        printf("Columns of A (%d) must equal rows of B (%d)\n", colsA, rowsB);
        return 1;
    }
    
    int matrixA[rowsA][colsA], matrixB[rowsB][colsB], product[rowsA][colsB];
    
    printf("\nEnter elements of matrix A (%dx%d):\n", rowsA, colsA);
    for(i = 0; i < rowsA; i++) {
        for(j = 0; j < colsA; j++) {
            printf("A[%d][%d]: ", i+1, j+1);
            scanf("%d", &matrixA[i][j]);
        }
    }
    
    printf("\nEnter elements of matrix B (%dx%d):\n", rowsB, colsB);
    for(i = 0; i < rowsB; i++) {
        for(j = 0; j < colsB; j++) {
            printf("B[%d][%d]: ", i+1, j+1);
            scanf("%d", &matrixB[i][j]);
        }
    }
    
    // Initialize product matrix to 0
    for(i = 0; i < rowsA; i++) {
        for(j = 0; j < colsB; j++) {
            product[i][j] = 0;
        }
    }
    
    // Calculate matrix multiplication
    for(i = 0; i < rowsA; i++) {
        for(j = 0; j < colsB; j++) {
            for(k = 0; k < colsA; k++) {
                product[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }
    
    printf("\nMatrix A (%dx%d):\n", rowsA, colsA);
    for(i = 0; i < rowsA; i++) {
        for(j = 0; j < colsA; j++) {
            printf("%4d ", matrixA[i][j]);
        }
        printf("\n");
    }
    
    printf("\nMatrix B (%dx%d):\n", rowsB, colsB);
    for(i = 0; i < rowsB; i++) {
        for(j = 0; j < colsB; j++) {
            printf("%4d ", matrixB[i][j]);
        }
        printf("\n");
    }
    
    printf("\nProduct of matrices A × B (%dx%d):\n", rowsA, colsB);
    for(i = 0; i < rowsA; i++) {
        for(j = 0; j < colsB; j++) {
            printf("%6d ", product[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}