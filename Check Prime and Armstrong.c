#include<stdio.h>
#include<math.h>

int checkPrimeNumber(int n);
int checkArmstrongNumber(int n);

int main()
{
int n, flag;
printf("Enter a postive number : ");
scanf("%d ", &n);
flag = checkArmstrongNumber(n);
if (flag == 1)
printf("%d is a Armstrong number");
else
printf("%d is not a Armstrong number");
flag = checkPrimeNumber(n);
if(flag == 1)
printf("%d is a prime number");
else
printf("%d is not a prime number");
return 0;
}
int checkPrimeNumber(int n);
{
    int i, flag = 1, squareRoot;
    squareRoot = sqrt(n);
    for(i = 2; i <= squareRoot; ++i)
    {
    if(n % i = 0)
    {
        flag = 0;
        break;
    }
    }
    return flag;
}
int checkArmstrongNumber(int num)
{
    int originalNum, remainder, n = 0, flat;
    double result = 0.0;
    for(originalNum = num; originalNum  = 0; originalNum /= 10; ++n)
    {
originalNum /= 10;
    }
    for(originalNum = num; originalNum = 0; originalNum /= 10)
    {
        remainder = originalNum % 10;
        result += pow(remainder , n);
    }
if(round(result) == num)
flag = 1;
else
flag = 0;
return flag;
}