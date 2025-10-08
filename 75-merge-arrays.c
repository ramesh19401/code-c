#include <stdio.h>

int main() {
    int n1, n2, i;
    
    printf("Enter size of first array: ");
    scanf("%d", &n1);
    
    int arr1[n1];
    printf("Enter %d elements for first array:\n", n1);
    for(i = 0; i < n1; i++) {
        printf("Element %d: ", i+1);
        scanf("%d", &arr1[i]);
    }
    
    printf("Enter size of second array: ");
    scanf("%d", &n2);
    
    int arr2[n2];
    printf("Enter %d elements for second array:\n", n2);
    for(i = 0; i < n2; i++) {
        printf("Element %d: ", i+1);
        scanf("%d", &arr2[i]);
    }
    
    int arr3[n1 + n2]; // Third array to store merged result
    
    // Copy first array to third array
    for(i = 0; i < n1; i++) {
        arr3[i] = arr1[i];
    }
    
    // Copy second array to third array
    for(i = 0; i < n2; i++) {
        arr3[n1 + i] = arr2[i];
    }
    
    printf("\nFirst array: ");
    for(i = 0; i < n1; i++) {
        printf("%d ", arr1[i]);
    }
    
    printf("\nSecond array: ");
    for(i = 0; i < n2; i++) {
        printf("%d ", arr2[i]);
    }
    
    printf("\nMerged array: ");
    for(i = 0; i < n1 + n2; i++) {
        printf("%d ", arr3[i]);
    }
    printf("\n");
    
    return 0;
}