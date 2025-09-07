#include <stdio.h>

int main() {
    int nombre_livres = 2;
    char titres[2][50] = {"les mesirables", "brothers karamasov"};
    char auteurs[2][50] = {"victor hugo", "dostoevesky"};
    float prix[2] = {1200, 1800.5}

    for (int i = 0; i < nombre_livres; i++) {
        printf("\nLivre %d:\n", i + 1);
        printf("Titre: %s, Auteur: %s, Prix: %.2f, Quantite: %d\n", titres[i], auteurs[i], prix[i], quantites[i]);
    }

    return 0;
}