#include <stdio.h>
#include <string.h>

struct etudiant {
    char nom[20];
    char prenom[20];
    int notes[4];
};

int main() {
    struct etudiant e1;
    strcpy(e1.nom, "Folki");
    strcpy(e1.prenom, "Zouhair");

    for (int i = 0; i < sizeof(e1.note); ) {

    }

    return 0;
}