#include<stdio.h>
long factorial(int n); 

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        long result = factorial(n); 
        printf("Factorial of %d is %ld\n", n, result);
    }

    return 0;
}

long factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1); 
}