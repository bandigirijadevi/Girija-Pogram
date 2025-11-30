
#include <stdio.h>

int isPrime(int n);

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    if ( isPrime(n))
   printf("the number is prime is %d ", n);
   else
   printf("the number is not prime is %d", n);
    return 0;
}

int isPrime(int n)
{
    if(n <= 1)
    return 0;
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0)
            return 0;  
    }
    return 1;
}
