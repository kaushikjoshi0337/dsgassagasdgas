#include <stdio.h>

int main() {
    int num, n = 1;

    printf("Enter any number: ");
    scanf("%d", &num);

   

    while (n <= num) {
        printf("%d ", n);
        n++;
    }


}
