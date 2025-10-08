#include <stdio.h>

int main() {
    int n, i, largest, secondLargest;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    if(n < 2) {
        printf("Array should have at least 2 elements.\n");
        return 1;
    }
    
    int arr[n];
    
    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++) {
        printf("Element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    
    // Initialize largest and second largest
    largest = secondLargest = arr[0];
    
    // Find largest element
    for(i = 1; i < n; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }
    
    // Find second largest element
    for(i = 0; i < n; i++) {
        if(arr[i] > secondLargest && arr[i] < largest) {
            secondLargest = arr[i];
        }
    }
    
    printf("\nArray elements: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    printf("\nLargest element: %d\n", largest);
    
    if(secondLargest == largest) {
        printf("No second largest element found (all elements are same or only one unique element)\n");
    } else {
        printf("Second largest element: %d\n", secondLargest);
    }
    
    return 0;
}