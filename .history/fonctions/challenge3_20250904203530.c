#include <stdio.h>

int maximum(int number1, int number2)
{
    int max = number1;
    if (number2 > number1)
    {
        max = number2;
    }
    return max;
}

int main()
{

    int number1;int number2;

    printf("Saisir le nombre 1: ");
    scanf("%d", &number1);

    printf("Saisir le nombre 2: ");
    scanf("%d", &number2);

    printf("le maximum est: %d", maximum(number1, number2));

    return 0;
}