#include <stdio.h>
#include <stdbool.h>
#include <string.h>

struct Joueur {
    int id;
    char nom[30];
    char prenom[30];
    int numeroMaillot;
    char poste[20];
    int age;
    int buts;
};

void affiche_menu() {
    char menu[] = {"\n1. Ajoute un joueur\n2. Afficher la list de tous les joueurs.\n3. Modifier un joueur.\n4. Supprimer un joueur.\n5. Recherche un joueur.\n6. Statistiques.\n7. Quitter.\n"};
    printf("%s", menu);
}

int generate_id(int index) {
    return index + 3; 
}

void ajouter_joueur(struct Joueur joueurs[], int index) {

    int id = generate_id(index);
    char nom[30], prenom[30], poste[30];
    int numeroMaillot, age, buts;

    printf("\nNom : ");
    fgets(nom, sizeof(nom), stdin);
    nom[strcspn(nom, "\n")] = 0;

    printf("Prenom : ");
    fgets(prenom, sizeof(prenom), stdin);
    prenom[strcspn(prenom, "\n")] = 0;

    printf("Numero Maillot: ");
    scanf("%d", &numeroMaillot);
    getchar();

    printf("Poste (gardien, defenseur, milieu, attaquant): ");
    fgets(poste, sizeof(poste), stdin);
    poste[strcspn(poste, "\n")] = 0;

    printf("Age: ");
    scanf("%d", &age);
    getchar();

    printf("Buts: ");
    scanf("%d", &buts);
    getchar();

    joueurs[index].id = id;
    strcpy(joueurs[index].nom, nom);
    strcpy(joueurs[index].prenom, prenom);
    joueurs[index].numeroMaillot = numeroMaillot;
    strcpy(joueurs[index].poste, poste);
    joueurs[index].age = age;
    joueurs[index].buts = buts;

}

void ajouter_plusieurs_joueurs(struct Joueur joueurs[], int size_joueurs) {
    
    int nombre_joueurs;
    printf("Entrer le nombre de joueures: ");
    scanf("%d", &nombre_joueurs);
    getchar();

    for (int i = 0; i < nombre_joueurs; i++) {
        printf("\nJoueur %d: ", i + 1);
        ajouter_joueur(joueurs, i);
    }
}

void trier_noms(char noms[][30], int size_joueurs) {
    
        char valeur_temp[30];
        for (int i = 0; i < size_joueurs - 1; i++) {
            int swapped = 0;
            for (int j = 0; j < size_joueurs - i - 1; j++) {
                if (strcmp(noms[j], noms[j+1]) > 0) {
                    strcpy(valeur_temp, noms[j]);
                    strcpy(noms[j], noms[j+1]);
                    strcpy(noms[j+1], valeur_temp);
                    swapped = 1;
                }
            }
            if (!swapped) {
                break;
            }
        }
}

void affiche_joueurs_nom(struct Joueur joueurs[], int size_joueurs) {

    char noms[size_joueurs][30];
    int j = 0;
    for (int i = 0; i < size_joueurs; i++) {
        if (strcmp(joueurs[i].nom, "\0") != 0) {
            strcpy(noms[j], joueurs[i].nom);
            j++;
        }
    }

    trier_noms(noms, size_joueurs);

    for (int i = 0; i < size_joueurs; i++) {
       if (strcmp(joueurs[i].nom, noms[i]) != 0) {
        
       } 
    }

}

int main() {

    struct Joueur joueurs[100];
    int index = 0;
    bool check_1 = true, check_2 = true;

    while (true) {

        affiche_menu();

        char choix_0;
        printf("\nEntrer votre choix: ");
        scanf("%c", &choix_0);
        getchar();
    
        switch(choix_0) {
            case '1':
                // Ajouter un joueur
                while (check_1) {

                    printf("\n1. Ajouter un joueur.\n2. Ajouter plusieurs.\n");
                    
                    char choix_ajout;
                    printf("\nEntrer votre choix: ");
                    scanf("%c", &choix_ajout); 
                    getchar();
    
                    switch(choix_ajout) {
                        case '1':
                            ajouter_joueur(joueurs, index);
                            index++;
                            check_1 = false;
                            break;
                        case '2':
                            ajouter_plusieurs_joueurs(joueurs, 100);
                            check_1 = false;
                            break;
                        default:
                            printf("\nInvalid choix!\n");
                            break;
                    }
                
                }

                break;
            case '2':
                // Afficher la list de tous les joueurs
                while (check_2) {

                    printf("\n1. les joueurs trier par ordre alphabetique.\n2. les joueurs trier par age.\n3. les joureurs trier par poste.\n");
    
                    char choix_affiche;
                    printf("\nEntrer votre choix: ");
                    scanf("%c", &choix_affiche);
                    getchar();
                    
                    switch(choix_affiche) {
                        case '1':
                            // affiche_joueurs_nom();
                            // affiche_joueurs_nom();
                            check_2 = false;
                            break;
                        case '2':
                            // affiche_joueurs_age();
                            check_2 = false;
                            break;
                        case '3':
                            // affiche_joueurs_poste();
                            check_2 = false;
                            break;
                        default:
                            printf("\nInvalid choix!\n");
                            break;
                    }
                }

                break;
            case '3':
                break;
            case '4':
                break;
            case '5':
                break;
            case '6':
                break;
            case '7':
                return 0;
                break;
                
        }
    }

    return 0;
}