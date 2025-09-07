#include <stdio.h>
#include <stdlib.h>

int main() {
    char *name = (char*) malloc(50 * sizeof(char));

    printf("Entrez le titre : ");
    fgets(name, sizeof(titres), stdin);
    getchar();

    printf("Les titres sont: ");
    for (int i = 0; i < sizeof(titres) / sizeof(titres[0]); i++) {
        printf("%s\n", titres[i]);
    }

    free(titres);

    return 0;
}