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

struct Joueur joueurs[100] = {0};

void affiche_menu() {
    char menu[] = {"\n1. Ajoute un joueur\n2. Afficher la list de tous les joueurs.\n3. Modifier un joueur.\n4. Supprimer un joueur.\n5. Recherche un joueur.\n6. Statistiques.\n7. Quitter.\n"};
    printf("%s", menu);
}

int generate_id(int index) {
    return (index + 1) *  3; 
}

void ajouter_joueur(struct Joueur joueurs[], int index) {

    struct Joueur j;
    j.id = generate_id(index);
    printf("\nNom : ");
    fgets(j.nom, sizeof(j.nom), stdin);
    j.nom[strcspn(j.nom, "\n")] = 0;

    printf("Prenom : ");
    fgets(j.prenom, sizeof(j.prenom), stdin);
    j.prenom[strcspn(j.prenom, "\n")] = 0;

    printf("Numero Maillot: ");
    scanf("%d", &j.numeroMaillot);
    getchar();

    printf("Poste (gardien, defenseur, milieu, attaquant): ");
    fgets(j.poste, sizeof(j.poste), stdin);
    j.poste[strcspn(j.poste, "\n")] = 0;

    printf("Age: ");
    scanf("%d", &j.age);
    getchar();

    printf("Buts: ");
    scanf("%d", &j.buts);
    getchar();

    // if (joueurs[index].id == 0) {
    joueurs[index] = j;
    // }
}

void ajouter_plusieurs_joueurs(struct Joueur joueurs[], int index) {
    
    int nombre_joueurs;
    printf("Entrer le nombre de joueures: ");
    scanf("%d", &nombre_joueurs);
    getchar();

    int i = 0;
    for (int j = 0; j < nombre_joueurs; j++) {
        printf("\nJoueur %d: ", j + 1);
        ajouter_joueur(joueurs, i + index);
        i++;
    }
        
}

int calcule_nbr_joueurs(struct Joueur joueurs[], int size_joueurs) {
    int nbr_joueurs = 0;
    for (int i = 0; i < size_joueurs; i++) {
        if (joueurs[i].id != 0) {
            nbr_joueurs++;
        }
    }
    return nbr_joueurs;
}

void trier_noms(char noms[][30], int nbr_joueurs) {
    
        char valeur_temp[30];
        for (int i = 0; i < nbr_joueurs - 1; i++) {
            int swapped = 0;
            for (int j = 0; j < nbr_joueurs - i - 1; j++) {
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

void affiche_joueurs_nom(struct Joueur joueurs[], int nbr_joueurs) {

    char noms[nbr_joueurs][30];

    for (int i = 0; i < nbr_joueurs; i++) {
        strcpy(noms[i], "\0");
    }

    for (int i = 0; i < nbr_joueurs; i++) {
        strcpy(noms[i], joueurs[i].nom);
        }

    trier_noms(noms, nbr_joueurs);

    for (int i = 0; i < nbr_joueurs; i++) {
        for (int j = 0; j < nbr_joueurs; j++) {
            if (strcmp(noms[i], joueurs[j].nom) == 0) {
                printf("\nID: %d, Nom: %s, Prenom: %s, Numero Maillot: %d, Poste: %s, Age: %d, Buts: %d.\n", joueurs[j].id, joueurs[j].nom, joueurs[j].prenom, joueurs[j].numeroMaillot, joueurs[j].poste, joueurs[j].age, joueurs[j].buts);
            }
        }
    }

}

void trier_ages(int ages[], int nombre_joueurs) {
    int valeur_temp;
    for (int i = 0; i < nombre_joueurs - 1; i++) {
        int swapped = 0;
        for (int j = 0; j < nombre_joueurs - i - 1; j++) {
            if (ages[j] > ages[j+1] > 0) {
                valeur_temp = ages[j];
                ages[j] = ages[j+1];
                ages[j+1] = valeur_temp;
                swapped = 1;
            }
        }
        if (!swapped) {
            break;
        }
    }
}

void affiche_joueurs_age(struct Joueur joueurs[], int nombre_joueurs){
    int ages[nombre_joueurs];

    for (int i = 0; i < nombre_joueurs; i++) {
        ages[i] = 0;
    }

    for (int i = 0; i < nombre_joueurs; i++) {
        ages[i] = joueurs[i].age;
    }

    trier_ages(ages, nombre_joueurs);

    for (int i = 0; i < nombre_joueurs; i++) {
        for (int j = 0; j < nombre_joueurs; j++) {
            if (ages[i] == joueurs[j].age) {
                printf("\nID: %d, Nom: %s, Prenom: %s, Numero Maillot: %d, Poste: %s, Age: %d, Buts: %d.\n", joueurs[j].id, joueurs[j].nom, joueurs[j].prenom, joueurs[j].numeroMaillot, joueurs[j].poste, joueurs[j].age, joueurs[j].buts);
            }
        }
    }

}

void affiche_joueurs_poste(struct Joueur joueurs[], int nombre_joueurs, char poste[]) {
    for (int i = 0; i < nombre_joueurs; i++) {
        if (strcmp(poste, joueurs[i].poste) == 0) {
            printf("\nID: %d, Nom: %s, Prenom: %s, Numero Maillot: %d, Poste: %s, Age: %d, Buts: %d.\n", joueurs[i].id, joueurs[i].nom, joueurs[i].prenom, joueurs[i].numeroMaillot, joueurs[i].poste, joueurs[i].age, joueurs[i].buts);
            }
        } 
}

int main() {
    
    int index = 0;
    bool check_1 = true, check_2 = true;
    int nombre_joueurs;
    char poste[30];
    
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
                    ajouter_plusieurs_joueurs(joueurs , index);
                    check_1 = false;
                    break;
                    default:
                    printf("\nInvalid choix!\n");
                    break;
                }
                
            }
            check_1 = true;
            
            break;
            case '2':
            // Afficher la list de tous les joueurs
            while (check_2) {
                
                printf("\n1. les joueurs trier par ordre alphabetique.\n2. les joueurs trier par age.\n3. les joureurs trier par poste.\n4. ");
                
                char choix_affiche;
                printf("\nEntrer votre choix: ");
                scanf("%c", &choix_affiche);
                getchar();
                
                switch(choix_affiche) {
                        case '1':
                            // Trier les joueurs par Nom (A->Z)
                            nombre_joueurs = calcule_nbr_joueurs(joueurs, 100);
                            affiche_joueurs_nom(joueurs, nombre_joueurs);
                            check_2 = false;
                            break;
                        case '2':
                            // Trier les joueurs par age;
                            nombre_joueurs = calcule_nbr_joueurs(joueurs, 100);
                            affiche_joueurs_age(joueurs, nombre_joueurs);
                            check_2 = false;
                            break;
                        case '3':
                            // Les joueurs par poste;
                            nombre_joueurs = calcule_nbr_joueurs(joueurs, 100);

                            printf("Entrer le poste: ");
                            fgets(poste, sizeof(poste), stdin);
                            poste[strcspn(poste, "\n")] = 0;

                            affiche_joueurs_poste(joueurs, nombre_joueurs, poste);
                            check_2 = false;
                            break;
                        case '#':
                            check_2 = false;
                            break;
                        default:
                            printf("\nInvalid choix!\n");
                            break;
                    }
                }
                check_2 = true;
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