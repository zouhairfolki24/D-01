#include <stdio.h>
#include <stdlib.h>

int main() {
    char *titres = (char*) malloc(100 * sizeof(char));

    for (int i = 0; i < sizeof(titres) / sizeof(titres[0]); i++) {
        printf("Entrez le titre %d: ", i + 1);
        fgets(titres, sizeof(titres), stdin);
        getchar();
    }

    printf("Les titres sont: ");
    for (int i = 0; i < sizeof(titres) / sizeof(titres[0]); i++) {
        printf("%d ", tableau[i]);
    }

    return 0;
}