#include<stdio.h>
int sumOfSquares(int n) {
    return (n * (n + 1) * (2 * n + 1)) / 6;
}

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n > 0) {
        printf("The sum of squares of the first %d natural numbers is: %d\n", n, sumOfSquares(n));
    } else {
        printf("Please enter a positive integer.\n");
    }

    return 0;
}