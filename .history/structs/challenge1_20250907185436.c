#include <stdio.h>
#include <string.h>

struct livre {
    char titre[50];
    char auteur[50]
    float prix;
    int quantite;
};

int main() {
    struct livre l1;
    struct livre l2;

    strcpy(l1.titre, "les mesirables");
    l1.prix = 1200.0;
    l1.quantite = 30;

    l2.prix = 800.0;
    l2.quantite = 10;

    printf("\nLivre 1: \n");
    printf("Titre: %s\n", l1.titre);
    printf("Prix: %.2f\n", l1.prix);
    printf("Quantite: %d\n", l1.quantite);

    printf("\nLivre 2: \n");
    printf("Prix: %.2f\n", l2.prix);
    printf("Quantite: %d\n", l2.quantite);


    return 0;
}