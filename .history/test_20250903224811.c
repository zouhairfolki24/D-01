#include <stdio.h>
#include <string.h>

int main()
{
    char fullName[12];

    for (int i = 0; i < strlen(fullName); i++)
    {
        printf("Entrer ", fullName[i]);
    }

    return 0;
}