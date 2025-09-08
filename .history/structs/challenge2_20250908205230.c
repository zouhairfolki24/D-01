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

    int len_notes = sizeof(e1.notes) / sizeof(e1.notes[0]);

    for (int i = 0; i < len_notes; i++) {
        e1.notes[i] = 14
    }

    return 0;
}