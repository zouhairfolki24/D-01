#include <stdio.h>

struct livre {
    char titre[50];
    char auteur[50];
    int annee;
};

struct livre infos_livre(struct livre l1) {
    return l1;
}

int main() {
    struct livre l1 = {"les mesirables", "victor hugo", 1999};

    printf("Titre: %s\n ")

    return 0;
}