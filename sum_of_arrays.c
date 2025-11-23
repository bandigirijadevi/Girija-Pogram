#include<stdio.h>
int main()
{
    int i, sum=0,arr[6];
    printf("Enter the array elements :");
    for(i = 0; i<6; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i = 0;i<6; i++)
{
    sum = sum+arr[i];
}
printf("sum of the array elements is :");
return 0;
}