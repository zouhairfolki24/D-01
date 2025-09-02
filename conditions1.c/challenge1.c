#include <stdio.h>

int main()
{
    int nombre;
    printf("Entrer un nombre: ");
    scanf("%d", &nombre);

    if (nombre % 2 == 0)
    {
        printf("paire\n");
    }
    else
    {
        printf("impair\n");
    }

    return 0;
}