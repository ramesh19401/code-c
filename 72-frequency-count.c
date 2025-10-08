#include <stdio.h>

int main() {
    int n, i, j;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n], freq[n];
    
    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++) {
        printf("Element %d: ", i+1);
        scanf("%d", &arr[i]);
        freq[i] = -1; // Initialize frequency array
    }
    
    // Calculate frequency of each element
    for(i = 0; i < n; i++) {
        int count = 1;
        for(j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
                freq[j] = 0; // Mark as counted
            }
        }
        if(freq[i] != 0) {
            freq[i] = count;
        }
    }
    
    printf("\nArray elements: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    printf("\nFrequency of each element:\n");
    for(i = 0; i < n; i++) {
        if(freq[i] != 0) {
            printf("Element %d occurs %d times\n", arr[i], freq[i]);
        }
    }
    
    return 0;
}