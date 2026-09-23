#include<stdio.h>
int main()
{
    float length, breadth;
    float Area;
    printf("Enter the value:\n");
    scanf("%f %f", &length, &breadth);
    Area = length * breadth;
    printf("The Area of Rectangle is: %.4f\n", Area);
    return 0;
}
