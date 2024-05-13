#include <stdio.h>

int main() {
    int start, end;

    // Input
    printf("Enter the first number: ");
    scanf("%d", &start);

    printf("Enter the second number: ");
    scanf("%d", &end);

    // Printing leap years between start and end using a while loop
    printf("Output:\n");
    int year = start;
    while (year <= end) {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            printf("%d, ", year);
        }
        year++;
    }

    return 0;
}
