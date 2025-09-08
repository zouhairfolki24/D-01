#include <stdio.h>

struct personne {
    char nom[20];
    char prenom[20];
    int age;
};

int main() {
    struct personne p1 = {"Folki", "Zouhair", 24};

    printf("Nom: %s\nPrenom: %s\nAge: %s.\n")

    return 0;
}