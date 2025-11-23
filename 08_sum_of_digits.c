#include <stdio.h>

int sumOfDigits(int n);

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("sum of digits: %d\n", sumOfDigits(n));
    return 0;
}

int sumOfDigits(int n) {
    if (n == 0) {
        return 0; 
    }
}
