#include <stdio.h>

int power(int base, int exponent);

int main() {
    int base, exp;
    printf("Enter base and exponent: ");
    scanf("%d %d", &base, &exp);

    int result = power(base, exp);   
    printf("%d^%d = %d\n", base, exp, result);

    return 0;
}

int power(int base, int exponent) {
    int result = 1;

    for (int i = 1; i <= exponent; i++) {
        result = result * base;   
    }

    return result;
}
