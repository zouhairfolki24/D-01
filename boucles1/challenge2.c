#include <stdio.h>
#include <stdbool.h>

int main()
{
    int nombre;
    float factorial = 1;

    printf("Entrer un nombre entier positif: ");
    scanf("%d", &nombre);

    if (nombre > 0)
    {
        for (int i = 1; i <= nombre; i++)
        {
            factorial *= i;
        }
        printf("%d! = %.2f", nombre, factorial);

    }
    else if (nombre == 0)
    {
        printf("0! = 1");
    }
    else
    {
        printf("Veuillez entrer un nombre entier positif.\n");
    }


    return 0;
}