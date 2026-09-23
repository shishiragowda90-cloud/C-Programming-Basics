#include <stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int N1, N2, Difference;
    printf("Enter the two Numbers:\n");
    scanf("%d %d", &N1, &N2);
    Difference = N1 - N2;
    printf("The Difference: %d", Difference);
    return 0;
}
