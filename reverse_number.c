
#include <stdio.h>

int reverse(int n);

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int rev = reverse(n);
    printf("the reversed number is %d \n", rev);
    
    return 0;
}

int reverse(int n) {
    int rev = 0;
    while (n != 0) {
        int digit = n % 10;     
        rev = rev * 10 + digit; 
        n = n / 10;             
    
}
return rev;
}