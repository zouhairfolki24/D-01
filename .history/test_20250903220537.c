#include <stdio.h>

int main()
{
    char titre[12];

    for (int i=0; i<12; i++) {
        printf("Entrer le titre: ");
        fgets(titre[i], sizeof(titre[i]), stdin);
    }
    return 0;
}