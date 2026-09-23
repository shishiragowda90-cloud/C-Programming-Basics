#include <stdio.h>

int main()
{
    int N1, N2, N3,Sum;
    float Average;
    printf("Enter three Numbers:\n");
    scanf("%d %d %d", &N1, &N2, &N3);
    Sum = N1 + N2 + N3;
    Average = Sum / 3.0;
    printf("Average: %.3f\n", Average);
    return 0;
}
