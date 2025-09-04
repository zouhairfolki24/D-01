#include <stdio.h>

int main()
{
    char characters[3];

    for (int i = 0; i < 3; i++)
    {
        printf("Entrer le titre: ");
        scanf("%c", characters[i]);
        printf("%c", characters[i]);
    }

    return 0;
}