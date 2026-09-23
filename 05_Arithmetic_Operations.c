#include<stdio.h>

int main()
{
    int N1, N2;
    int Sum, Difference, Remainder;
    float Multiplication, Quotient;

    printf("Enter two Numbers:\n");
    scanf("%d %d", &N1, &N2);
    Sum = N1 + N2;
    Difference = N1 - N2;
    Multiplication = N1 * N2;
    Quotient = (float)N1 / N2;
    Remainder = N1 % N2;

    printf("Sum: %d\n", Sum);
    printf("Difference: %d\n", Difference);
    printf("Multiplication: %.2f\n", Multiplication);
    printf("Quotient: %.2f\n", Quotient);
    printf("Remainder: %d\n", Remainder);
    return 0;

}
