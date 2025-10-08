#include <stdio.h>

int main() {
    int n, i, position, element;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n+1]; // Extra space for insertion
    
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
    
    printf("Enter element to insert: ");
    scanf("%d", &element);
    printf("Enter position (1-%d): ", n+1);
    scanf("%d", &position);
    
    if(position < 1 || position > n+1) {
        printf("Invalid position! Position should be between 1 and %d\n", n+1);
        return 1;
    }
    
    // Shift elements to the right
    for(i = n; i >= position; i--) {
        arr[i] = arr[i-1];
    }
    
    // Insert new element
    arr[position-1] = element;
    n++; // Increase array size
    
    printf("\nArray after insertion: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}