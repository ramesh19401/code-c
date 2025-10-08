#include <stdio.h>

int main() {
    int ascii;
    printf("Enter ASCII value: ");
    scanf("%d", &ascii);
    
    printf("Character for ASCII %d is: %c\n", ascii, ascii);
    return 0;
}