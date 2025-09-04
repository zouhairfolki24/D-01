#include <stdio.h>

int main()
{
    char titres[2][50];

    for (int i = 0; i < 2; i++)
    {
        printf("Entrer une character: ");
        scanf("%s", &characters[i]);
    }

    for (int i = 0; i < 6; i++)
    {
        printf("%c\n", characters[i]);
    }

    return 0;
}