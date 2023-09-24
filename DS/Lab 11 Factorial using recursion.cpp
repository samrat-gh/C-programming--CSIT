#include <stdio.h>

int factorial(int n) {
    // base case: return 1 when n is 0 or 1
    if (n == 0 || n == 1) {
        return 1;
    } else {
        // recursive case: compute n! by multiplying n by (n-1)!
        return n * factorial(n - 1);
    }
}

int main() {
    int n;
    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Error: n must be a non-negative integer.\n");
        return 1;
    }

    int result = factorial(n);
    printf("%d! = %d\n", n, result);

    return 0;
}

