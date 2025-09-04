#include <stdio.h>

int main()
{
    char titres[3];

    for (int i = 0; i < 12; i++)
    {
        printf("Entrer le titre: ");
        scanf("%s", titres[i]);
        printf("%s", titres[i]);
    }

    return 0;
}