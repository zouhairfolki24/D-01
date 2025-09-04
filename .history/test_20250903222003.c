#include <stdio.h>

int main()
{
    char titres[3];

    for (int i = 0; i < 12; i++)
    {
        printf("Entrer le titre: ");
        fgets(titres[i], sizeof(titres[i]), stdin);
    }

    return 0;
}