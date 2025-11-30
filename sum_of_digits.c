
#include <stdio.h>

int sumOfDigits(int n);

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int sum = sumOfDigits( n);
    printf("sum of digit is %d \n", sum);

    return 0;
}

int sumOfDigits(int n) {
   int sum = 0;
   while(n != 0)
   {
    int digit = n % 10;
    sum = sum + digit;
    n = n / 10;
   }
   return sum;
}

