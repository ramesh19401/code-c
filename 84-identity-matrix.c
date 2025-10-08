#include <stdio.h>

int main() {
    int n, i, j, isIdentity = 1;
    
    printf("Enter the size of square matrix: ");
    scanf("%d", &n);
    
    int matrix[n][n];
    
    printf("\nEnter elements of %dx%d matrix:\n", n, n);
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("Element [%d][%d]: ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }
    
    printf("\nMatrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("%4d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    // Check if matrix is an identity matrix
    for(i = 0; i < n && isIdentity; i++) {
        for(j = 0; j < n; j++) {
            if(i == j) {
                // Diagonal elements should be 1
                if(matrix[i][j] != 1) {
                    isIdentity = 0;
                    break;
                }
            } else {
                // Non-diagonal elements should be 0
                if(matrix[i][j] != 0) {
                    isIdentity = 0;
                    break;
                }
            }
        }
    }
    
    if(isIdentity) {
        printf("\nThe matrix IS an Identity Matrix.\n");
        printf("Properties verified:\n");
        printf("- All diagonal elements are 1\n");
        printf("- All non-diagonal elements are 0\n");
    } else {
        printf("\nThe matrix is NOT an Identity Matrix.\n");
        printf("Identity matrix requirements:\n");
        printf("- All diagonal elements must be 1\n");
        printf("- All non-diagonal elements must be 0\n");
    }
    
    return 0;
}