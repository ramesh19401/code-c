#include <stdio.h>

int main() {
    int n, i, sum = 0;
    float average;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++) {
        printf("Element %d: ", i+1);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    
    average = (float)sum / n;
    
    printf("\nArray elements: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    printf("\nSum of all elements: %d\n", sum);
    printf("Average of all elements: %.2f\n", average);
    
    return 0;
}