#include <stdio.h>

int main()
{
    char titres[14];

    for (int i = 0; i < 3; i++)
    {
        printf("saisir une charactere: ");
        fgets(characters[i], sizeof(characters[i]), stdin);

        printf("%c\n", characters[i]);
    }

    return 0;
}