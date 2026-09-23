#include<stdio.h>

int main()
{
    int N1, N2;
    printf("Enter Numbers:\n");
    scanf("%d %d", &N1, &N2);
    // Swapping two numbers without using third variable
    N1 = N1 + N2;
    N2 = N1 - N2;
    N1 = N1 - N2;
    printf("N1: %d\n", N1);
    printf("N2: %d", N2);
    return 0;
}
