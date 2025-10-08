#include <stdio.h>

int main() {
    float units, bill;
    printf("Enter electricity units consumed: ");
    scanf("%f", &units);
    
    if(units <= 100) {
        bill = units * 1.50; // Rate for first 100 units
    }
    else if(units <= 200) {
        bill = 100 * 1.50 + (units - 100) * 2.00; // Next 100 units
    }
    else if(units <= 300) {
        bill = 100 * 1.50 + 100 * 2.00 + (units - 200) * 3.00; // Next 100 units
    }
    else {
        bill = 100 * 1.50 + 100 * 2.00 + 100 * 3.00 + (units - 300) * 4.00; // Above 300 units
    }
    
    // Add fixed charges
    bill += 50.0; // Fixed service charge
    
    printf("\n--- Electricity Bill ---\n");
    printf("Units consumed: %.2f\n", units);
    printf("Bill amount: Rs. %.2f\n", bill);
    
    return 0;
}