#include <stdio.h>

int main()
{
    char characters[6];

    for (int i = 0; i < 6; i++)
    {
        printf("Entrer une character: ");
        scanf("%s", &characters[i]);
    }

    for (int i = 0; i < 6; i++)
    {
        printf("%s\n", characters[i]);
    }

    return 0;
}