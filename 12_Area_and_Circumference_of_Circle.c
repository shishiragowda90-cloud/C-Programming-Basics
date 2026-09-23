#include<stdio.h>
#define pi 3.14

int main()
{
    int r, Area, Circumference;
    printf("Enter any Number:\n");
    scanf("%d", &r);
    Area = pi*r*r;
    Circumference = 2*pi*r;
    printf("Area of a Circle: %d\n", Area);
    printf("Circumference of a Circle: %d", Circumference);
    return 0;
}
