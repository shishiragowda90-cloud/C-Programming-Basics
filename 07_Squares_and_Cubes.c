#include<stdio.h>

int main()
{
    int Number, Square, Cube;
    printf("Enter the Number:\n");
    scanf("%d", &Number);
    Square = Number * Number;
    Cube = Number * Number * Number;
    printf("Square: %d\n", Square);
    printf("Cube: %d", Cube);
    return 0;
}
