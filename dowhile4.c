#include <stdio.h>

int main() {
    int i;

    printf("Enter any number: ");
    scanf("%d", &i);

    printf("Output:\n");
    while (i >= 1) {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
        i--;
    }

    return 0;
}
