#include <stdio.h>

struct livre {
    char titre[50];
    char auteur[50];
    float prix;
    int quantite;
};

int main() {
    struct livre l1 = {"les mesirables", "victor hugo", 1200.0, 3};

    l2 = l1;
    
    printf("Titre: %s\n", l2.titre);
    printf("Auteur: %s\n", l2.auteur);
    printf("Prix: %.2f\n", l2.prix);
    printf("Quantite: %d\n", l2.quantite);




    return 0;
}