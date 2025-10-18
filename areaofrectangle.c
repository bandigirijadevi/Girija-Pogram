#include<stdio.h>
//area of rectangle
int main() {
    int length, breadth, area;
   printf("Enter length of rectangle\n");
   scanf("%d", &length);

   printf("Enter breadth of rectangle\n");
   scanf("%d", &breadth);

   area = length * breadth;

   printf("Area of rectangle is %d\n", area);
   return 0;
}