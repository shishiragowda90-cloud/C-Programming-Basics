#include<stdio.h>

int main()
{
    float Celsius, Fahrenheit;
    float Temperature;
    printf("Enter the Value of Celsius:\n");
    scanf("%f", &Celsius);
    Fahrenheit = (Celsius * 9/5) + 32;
    printf("Fahrenheit: %.4f\n", Fahrenheit);
    return 0;
}
