#include <stdio.h>

int main() {
    int n, m, count = 0;

    printf("Enter a positive integer n (1 < n < 150): ");
    scanf("%d", &n);

    if (n <= 1 || n >= 150) {
        printf("Number out of the valid range.\n");
        return 1;
    }

    for (m = 1; m <= n; m++) {
        if (n % m == n / m) {
            count++;
        }
    }

    printf("Number of equal divisors of a number %d: %d\n", n, count);

    return 0;
}