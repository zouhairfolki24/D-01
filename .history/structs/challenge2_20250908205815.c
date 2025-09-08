#include <stdio.h>
#include <string.h>

struct etudiant {
    char nom[20];
    char prenom[20];
    int notes[4];
};

int main() {
    struct etudiant e1;
    // strcpy(e1.nom, "Folki");
    // strcpy(e1.prenom, "Zouhair");

    

    e1.notes[0] = 18;
    e1.notes[1] = 19;
    e1.notes[2] = 17;
    e1.notes[3] = 15;
    
    int len_notes = sizeof(e1.notes) / sizeof(e1.notes[0]);
    
    printf("Nom: %s\nPrenom: %s\nNotes: \n");
    for (int i = 0; i < len_notes; i++) {
        printf("Note %d: %d\n", i+1, e1.notes[i]);
    }

    return 0;
}