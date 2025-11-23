#include<stdio.h>
int main(){


int num[20], i, n, sum=0, avg;
printf("Enter the number of elements : ");
scanf("%d",&n);
for(i=0; i<n; ++i)
{
printf("enter the number %d ", i+1);
scanf("%d", &num[i]);
sum+=num[i];
}
avg = sum/n;
printf("average is %d ", avg);
return 0;

}
