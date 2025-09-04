#include <stdio.h>

int main()
{
    char characters[3];

    for (int i = 0; i < 3; i++)
    {
        printf("saisir une charactere: ");
        fgets(characters[i], sizeof(characters[i]), )
        printf("%c\n", characters[i]);
    }

    return 0;
}