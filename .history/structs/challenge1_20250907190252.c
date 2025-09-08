#include <stdio.h>

struct livre {
    char titre[50];
    char auteur[50];
    float prix;
    int quantite;
};

int main() {
    struct livre l1 = {"les mesirables", "victor hugo", 1200.0, 3};

    printf("Titre: %s\n", l1.titre);
    printf("Auteur: %s\n", l1.auteur);
    printf("")

    return 0;
}