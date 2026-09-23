#include<stdio.h>

int main()
{
    int totalSeconds, Seconds, Minutes, Hours;

    printf("Enter time in seconds:\n");
    scanf("%d", &totalSeconds);

    Minutes = (totalSeconds % 3600) / 60;
    Hours = totalSeconds / 3600;
    Seconds = totalSeconds % 60;

    printf("Minutes: %d min\n", Minutes);
    printf("Hours: %d hr\n", Hours);
    printf("Seconds: %d sec\n", Seconds);

    return 0;
}
