#include <stdio.h>

int main(void) {
    int n;

    printf("number: ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (n < 0) {
        printf("Please enter a non-negative integer.\n");
        return 1;
    }

    long long sum = 1LL * n * (n + 1) / 2;
    printf("output: %lld\n", sum);
    return 0;
}