#include <stdio.h>

int main() {
    int n, i, position;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++) {
        printf("Element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    
    printf("\nOriginal array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    printf("Enter position to delete (1-%d): ", n);
    scanf("%d", &position);
    
    if(position < 1 || position > n) {
        printf("Invalid position! Position should be between 1 and %d\n", n);
        return 1;
    }
    
    printf("Element %d at position %d will be deleted.\n", arr[position-1], position);
    
    // Shift elements to the left
    for(i = position-1; i < n-1; i++) {
        arr[i] = arr[i+1];
    }
    
    n--; // Decrease array size
    
    printf("\nArray after deletion: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}