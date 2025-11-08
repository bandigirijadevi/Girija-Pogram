#include<stdio.h>
float cal_area(float r)

int main()
{
    float area, radius;
    printf("Enter the radius of the circle \n");
    scanf("%f", &radius);
    area = cal_area(radius);
    printf("Area of the cicle with the radiu %f : %f", radius, area);
    return 0;
}
float cal_area(float radius)
{
return (3.14 * radius * radius);
}