#include <stdio.h>

int main() {
    int n, i, j, primarySum = 0, secondarySum = 0;
    
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
    
    // Calculate sum of primary diagonal (top-left to bottom-right)
    for(i = 0; i < n; i++) {
        primarySum += matrix[i][i];
    }
    
    // Calculate sum of secondary diagonal (top-right to bottom-left)
    for(i = 0; i < n; i++) {
        secondarySum += matrix[i][n-1-i];
    }
    
    printf("\nMatrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("%4d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    printf("\nPrimary diagonal elements: ");
    for(i = 0; i < n; i++) {
        printf("%d ", matrix[i][i]);
    }
    printf("\nSum of primary diagonal: %d\n", primarySum);
    
    printf("\nSecondary diagonal elements: ");
    for(i = 0; i < n; i++) {
        printf("%d ", matrix[i][n-1-i]);
    }
    printf("\nSum of secondary diagonal: %d\n", secondarySum);
    
    if(n % 2 == 1) {
        // For odd-sized matrices, subtract the center element once as it's counted twice
        int centerElement = matrix[n/2][n/2];
        int totalSum = primarySum + secondarySum - centerElement;
        printf("\nTotal sum of both diagonals (center element counted once): %d\n", totalSum);
    } else {
        printf("\nTotal sum of both diagonals: %d\n", primarySum + secondarySum);
    }
    
    return 0;
}