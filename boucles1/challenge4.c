#include <stdio.h>

int main()
{
    int nombre;
    int j = 1;

    printf("Entrer un nombre entier: ");
    scanf("%d", &nombre);

    for (int i = 1; i <= nombre; i++) {
        printf("%d\n", j);
        j += 2;
    }

    return 0;
}