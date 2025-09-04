#include <stdio.h>
#include <string.h>

int main()
{
    char name[] = "Zouhair";
    printf("%zu", sizeof(name));
    printf("%zu", strlen(name));

    return 0;
}