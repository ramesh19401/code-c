#include <stdio.h>

int main() {
    int totalDays, years, weeks, remainingDays;
    printf("Enter number of days: ");
    scanf("%d", &totalDays);
    
    years = totalDays / 365;
    remainingDays = totalDays % 365;
    weeks = remainingDays / 7;
    remainingDays = remainingDays % 7;
    
    printf("Years: %d, Weeks: %d, Days: %d\n", years, weeks, remainingDays);
    return 0;
}