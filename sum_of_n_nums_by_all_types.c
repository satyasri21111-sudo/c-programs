#include <stdio.h>

// Function to calculate sum using formula
int Formula(int n) {
    return (n * (n + 1) / 2);
}

// Function to calculate sum using loop
int Loop(int n) {
    int sum = 0,i;
    for (i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

// Function to calculate sum using recursion
int Recursion(int n) {
    if (n == 0)       //base condition
        return 0;
    else 
        return n + Recursion(n - 1);     //adds til base cond is true
}

int main()
 {
    int n;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    printf("Sum using formula: %d\n",Formula(n));
    printf("Sum using loop: %d\n",Loop(n));
    printf("Sum using recursion: %d\n",Recursion(n));

    return 0;
}


