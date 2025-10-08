#include <stdio.h>

int main() {
    int n, i, largest, smallest;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++) {
        printf("Element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    
    // Initialize largest and smallest with first element
    largest = smallest = arr[0];
    
    // Find largest and smallest
    for(i = 1; i < n; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
        if(arr[i] < smallest) {
            smallest = arr[i];
        }
    }
    
    printf("\nArray elements: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    printf("\nLargest element: %d\n", largest);
    printf("Smallest element: %d\n", smallest);
    
    return 0;
}