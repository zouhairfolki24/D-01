#include <stdio.h>

struct livre {
    char titre[50];
    char auteur[50];
    int annee;
};

struct livre infos_livre() {
    struct livre l1 = {"les mesirables", "victor hugo", 1999};
    return l1;
}

int main() {
    struct livre l1 = infos_livre();

    printf("Livre: \n .Titre: %s\n .Auteur: %s\n .Annee: %d\n", );

    return 0;
}