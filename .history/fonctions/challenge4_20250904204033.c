#include <stdio.h>

int minimum(int number1, int number2)
{
    int min = number1;

    if (number2 < number1)
    {
        min = number2;
    }

    return min;
}

int main()
{

    int number1, number2;

    printf("Saisir le nombre 1: ");
    scanf("%d", &number1);

    printf("Saisir le nombre 1: ");
    scanf("%d", &number2);

    return 0;
}