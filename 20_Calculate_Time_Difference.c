#include<stdio.h>
#include<stdlib.h>

int main()
{
    int H1, M1, H2, M2;
    int Start, End, Difference;
    int Hours, Minutes;

    printf("Enter start time (hours minutes): ");
    scanf("%d %d", &H1, &M1);

    printf("Enter end time (hours minutes): ");
    scanf("%d %d", &H2, &M2);

    Start = H1*60+M1;
    End = H2*60+M2;

    Difference = End - Start;

    Hours = Difference/60;
    Minutes = Difference%60;

    printf("Time difference = %d hours %d minutes\n", Hours, Minutes);
    return 0;
}

