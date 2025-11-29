#include <stdio.h>

int main() {
    int num, reversed = 0, digit;

    // Input number
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Process digits
    while (num != 0) {
        digit = num % 10;               // extract last digit
        reversed = reversed * 10 + digit; // build reversed number
        num /= 10;                      // remove last digit
    }

    // Output result
    printf("Reversed number = %d\n", reversed);

    return 0;
}
