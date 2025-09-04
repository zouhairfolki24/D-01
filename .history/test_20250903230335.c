#include <stdio.h>

int main()
{
    char titres[2][50];
    char auteurs[2][50];

    for (int i = 0; i < 2; i++)
    {
        printf("Entrer le titre: ");
        fgets(titres[i], sizeof(titres[i]), stdin);
        
        printf("Entrer l'auteur: ");
        fgets(auteurs[i], sizeof(auteurs[i]), stdin);
    }

    for (int i = 0; i < 6; i++)
    {
        printf("%S")
        printf("%s", auteurs[i]);
    }

    return 0;
}