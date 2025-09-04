#include <stdio.h>

int main()
{
    char characters[3];

    for (int i = 0; i < 3; i++)
    {
        printf("Entrer le titre: ");
        scanf("%c", titres[i]);
        printf("%c", titres[i]);
    }

    return 0;
}