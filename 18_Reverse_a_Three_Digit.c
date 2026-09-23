#include<stdio.h>
#include<stdlib.h>

int main()
{
    int N, digit, Reverse = 0;
    printf("Enter the value of N");
    scanf("%d\n", &N);

    digit = N%10;
    N = N/10;
    Reverse = Reverse*10+digit;

    digit = N%10;
    N = N/10;
    Reverse = Reverse*10+digit;

    digit = N%10;
    N = N/10;
    Reverse = Reverse*10+digit;

    printf("Reverse: %d\n", Reverse);
    return 0;
}
