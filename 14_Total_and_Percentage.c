#include<stdio.h>

int main()
{
    int marks, Total_Marks;
    int Subject1, Subject2, Subject3, Subject4, Subject5;
    float Percentage;

    printf("Enter the marks for All 5 Subjects:\n");
    scanf("%d %d %d %d %d", &Subject1, &Subject2, &Subject3, &Subject4, &Subject5);

    Total_Marks = Subject1+Subject2+Subject3+Subject4+Subject5;
    Percentage = (Total_Marks * 100) / 500;

    printf("Total marks of the student: %d\n", Total_Marks);
    printf("Percentage of the student: %f", Percentage);

    return 0;
}
