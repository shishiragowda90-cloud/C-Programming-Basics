#include<stdio.h>
#include<stdlib.h>

int main()
{
    int N, Hundreds, Tens, Units;

    printf("Enter a Three-digit number:\n");
    scanf("%d", &N);

    Hundreds = N/100;
    Tens = (N/10)%10;
    Units = N%10;
    printf("Hundreds digit = %d\n", Hundreds);
    printf("Tens Digit = %d\n", Tens);
    printf("Units digit = %d\n", Units);
    return 0;
}
