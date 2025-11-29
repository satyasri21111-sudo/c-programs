#include <stdio.h>

// Recursive function to calculate sum of given digits
int sum(int n) {
    if (n == 0)   // base case
        return 0;
    else
        return (n % 10) + sum(n / 10);  // recursive call
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Sum of digits = %d\n", sum(num));

    return 0;
}
