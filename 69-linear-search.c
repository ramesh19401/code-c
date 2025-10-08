#include <stdio.h>

int main() {
    int n, i, search, found = 0, position = -1;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++) {
        printf("Element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    
    printf("Enter element to search: ");
    scanf("%d", &search);
    
    // Linear search
    for(i = 0; i < n; i++) {
        if(arr[i] == search) {
            found = 1;
            position = i;
            break;
        }
    }
    
    printf("\nArray elements: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    if(found) {
        printf("Element %d found at position %d (index %d)\n", search, position + 1, position);
    } else {
        printf("Element %d not found in the array\n", search);
    }
    
    return 0;
}