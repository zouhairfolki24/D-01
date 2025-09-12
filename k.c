#include <stdio.h>

struct Joueur {
    int id;
    char nom[30];
    char prenom[30];
    int numeroMaillot;
    char poste[20];
    int age;
    int buts;
};

struct Joueur joueurs[100] = {0};

void remplissage_infos_joueur() {
    struct Joueur joueur1 = {3, "folki", "zouhair", 8, "milieu", 24, 4};
    joueurs[0] = joueur1;

    struct Joueur joueur2 = {6, "dachi", "zakaria", 7, "attaquant", 25, 3};
    joueurs[1] = joueur2;

    struct Joueur joueur3 = {9, "bougam", "younes", 1, "gardien", 23, 0};
    joueurs[2] = joueur3;

    struct Joueur joueur4 = {12, "jahri", "mohamed", 6, "milieu", 24, 3};
    joueurs[3] = joueur4;

    struct Joueur joueur5 = {15, "dahloune","zakaria", 2, "defenseur", 23, 1};
    joueurs[4] = joueur5;

    struct Joueur joueur6 = {18, "aoudi", "ahmed", 7, "attaquant", 28, 5};
    joueurs[5] = joueur6;

    struct Joueur joueur7 = {21, "dari", "achraf", 8, "milieu", 19, 2};
    joueurs[6] = joueur7;
}

void affiche_joueurs_nom(struct Joueur joueurs[], int nombre_joueurs)
{

    for (int i = 0; i < nombre_joueurs; i++)
    {
        if (joueurs[i].id != 0)
        {
            printf("\nID: %d, Nom: %s, Prenom: %s, Numero Maillot: %d, Poste: %s, Age: %d, Buts: %d.\n", joueurs[i].id, joueurs[i].nom, joueurs[i].prenom, joueurs[i].numeroMaillot, joueurs[i].poste, joueurs[i].age, joueurs[i].buts);
        }
    }
}

int main() {

    remplissage_infos_joueur();

    affiche_joueurs_nom(joueurs, 100);
    
    return 0;
}