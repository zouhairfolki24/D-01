#include <stdio.h>
#include <string.h>

int main()
{
    char fullName[] = "Zouhair Folki";

    for (int i = 0; i < strlen(fullName); i++)
    {
        printf("%c", fullName[i]);
    }

    return 0;
}