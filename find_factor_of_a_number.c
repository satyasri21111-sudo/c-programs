#include <stdio.h>

int main() {
    int num, i;

    // Input number
    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Factors of %d are: ", num);

    // Loop through numbers from 1 to num
    for (i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d ", i);  // print factor
        }
    }

    printf("\n");
    return 0;
}
