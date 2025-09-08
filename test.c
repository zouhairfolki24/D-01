#include <stdio.h>

struct Etudiant {
    int id;
    char nom[30];
    char prenom[30];
};

struct Etudiant getElementById(int index, struct Etudiant etudiants[]) {
    return etudiants[index];
}

int main() {
    struct Etudiant e1 = {1, "folki", "zouhair"};

    
    struct Etudiant etudiants[3];

    etudiants[0] = e1;

    struct Etudiant result = getElementById(0, etudiants);

    printf("id: %d, nom: %s, prenom: %s.\n", result.id, result.nom, result.prenom);

    

    return 0;
}