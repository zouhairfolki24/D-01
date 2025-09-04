#include <stdio.h>
#include <string.h>

int main()
{
    char characters[12];

    for (int i = 0; i < strlen(characters); i++)
    {
        printf("Entrer ", characters[i]);
    }

    return 0;
}