#include <stdio.h>

int main() {
        for (int i = 0; i < nombre_livres; i++)
    {
        printf("\nLivre %d:\n", i + 1);
        printf("Titre: %s, Auteur: %s, Prix: %.2f, Quantite: %d\n", titres[i], auteurs[i], prix[i], quantites[i]);
    }

    return 0;
}