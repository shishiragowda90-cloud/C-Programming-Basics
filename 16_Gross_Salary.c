#include<stdio.h>

int main()
{
    float Basic, HRA, DA, Gross_Salary;
    printf("Enter the Basic Salary:\n");
    scanf("%f", &Basic);

    HRA = (20*Basic)/100;
    DA = (10*Basic)/100;
    Gross_Salary = HRA+DA+Basic;

    printf("Gross Salary: %.2f\n", Gross_Salary);
    return 0;
}
