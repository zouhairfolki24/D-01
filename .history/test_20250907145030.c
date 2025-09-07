#include <stdio.h>
#include <string.h>

int main() {
    char titres[3][50] = {{0}};

    strcpy(titres[0], "les mesirables");

    for (int i = 0; i < 3; i++) {
        printf("'%s'\n", titres[i]);
    }

    for (int i = 0; i < 100; i++) {
        if (strcmp(titres[i], "\0") != 0 && strcmp(auteurs[i], "\0") != 0 && prix[i] != 0.0 && quantites[i] != 0) {
            nombre_livres++;
        }
    }

    for (int i = 0; i < nombre_livres; i++)
        {
            printf("\nLivre %d:\n", i + 1);
            printf("Titre: %s, Auteur: %s, Prix: %.2f DH, Quantite: %d\n", titres[i], auteurs[i], prix[i], quantites[i]);
        }

    return 0;
}