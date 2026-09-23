#include<stdio.h>

int main()
{
    int Remaining_Days, Days, Years, Weeks;

    printf("Enter Days:\n");
    scanf("%d", &Days);

    Years = Days/365;
    Remaining_Days = Days%365;
    Weeks = Remaining_Days/7;
    Days = Remaining_Days%7;

    printf("Years: %d\n", Years);
    printf("Weeks: %d\n", Weeks);
    printf("Remaining days: %d\n", Remaining_Days);
    printf("Days: %d", Days);
    return 0;
}
