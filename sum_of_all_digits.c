#include <stdio.h>

int main() {
    int num, sum = 0, digit;

    // Input number
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Process each digit
    while (num != 0) {
        digit = num % 10;   // extract last digit
        sum += digit;       // add to sum
        num/=10;          // remove last digit
    }

    // Output result
    printf("Sum of digits = %d\n", sum);

    return 0;
}
