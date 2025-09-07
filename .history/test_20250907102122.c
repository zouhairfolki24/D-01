#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char **titres = (char**) malloc(100 * sizeof(char*));
    for (int i = 0; i < 100; i++) {
        titres[i] = (char*) malloc(50 * sizeof(char));
    }    

    int j = 0;

    printf("Entrez le titre du livre : ");
    fgets(titres[j], 50, stdin);
    titres[j][strcspn(titres[j], "\n")] = 0;

    printf("\nLes titres des livres:\n");
    for (int i = 0; i < 100; i++) {
        printf("Livre %d: %s\n", i + 1, titres[i]);
    }

    for (int i = 0; i < 100; i++) {
        free(titres[i]);
    }
    free(titres);

    return 0;
}