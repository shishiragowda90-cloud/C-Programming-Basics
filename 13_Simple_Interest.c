#include<stdio.h>

int main()
{
    float Principal, Rate, Time;
    float SI, Total;

    printf("Enter Principal, Rate, Time:\n");
    scanf("%f %f %f", &Principal, &Rate, &Time);

    SI = (Principal*Rate*Time) / 100;
    Total = Principal + SI;

    printf("Simple Interest: %.3f\n", SI);
    printf("Total: %.2f\n", Total);
    return 0;
}
