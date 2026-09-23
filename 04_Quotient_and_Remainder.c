#include <stdio.h>

int main()
{
    int N1, N2;
    float Quotient, Remainder;
    printf("Enter two Numbers:\n");
    scanf("%d %d", &N1, &N2);
    Quotient = (float)N1 / N2;
    Remainder = N1 % N2;
    printf("Quotient: %.3f\n", Quotient);
    printf("Remainder: %f\n", Remainder);
    return 0;
}
