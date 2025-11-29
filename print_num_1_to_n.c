#include <stdio.h>

int main()
 {
    int N, i;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &N);

    // Print numbers from N to 1
    for (i = N; i >= 1; i--) {
        printf("%d ", i);
    }

    printf("\n");
    return 0;
}
