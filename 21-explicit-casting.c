#include <stdio.h>

int main() {
    float floatNum = 15.75;
    int intNum;
    
    printf("Original float value: %.2f\n", floatNum);
    
    // Explicit type casting
    intNum = (int)floatNum;
    
    printf("After explicit casting to int: %d\n", intNum);
    return 0;
}