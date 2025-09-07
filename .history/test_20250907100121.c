#include <stdio.h>
#include <stdlib.h>

int main() {
    char *titres = (char*) malloc(100 * sizeof(char));

    for (int i = 0; i < sizeof(titres) / sizeof(titres[0]); i++) {
        printf("Entrez l'element %d: ", i + 1);
        fgets(titres, sizeof(titres), stdin);
        getchar();
    }

    printf("Les elements sont: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", tableau[i]);
    }

    return 0;
}