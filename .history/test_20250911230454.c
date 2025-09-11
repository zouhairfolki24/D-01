#include <stdio.h>
#include <stdbool.h>
#include <string.h>

struct Joueur
{
    int id;
    char nom[30];
    char prenom[30];
    int numeroMaillot;
    char poste[20];
    int age;
    int buts;
};

// struct Joueur joueurs[100] = {0};
struct Joueur joueurs[100] = {{3, "folki", "zouhair", 8, "milieu", 24, 4},
                              {6, "dachi", "zakaria", 7, "attaquant", 25, 3},
                              {9, "bougam", "younes", 1, "gardien", 23, 0}};

void affiche_menu()
{
    char menu[] = {"\n1. Ajoute un joueur\n2. Afficher la list de tous les joueurs.\n3. Modifier un joueur.\n4. Supprimer un joueur par ID.\n5. Recherche un joueur.\n6. Statistiques.\n7. Quitter.\n"};
    printf("%s", menu);
}

int generate_id(int index)
{
    return (index + 1) * 3;
}

void ajouter_joueur(struct Joueur joueurs[], int index)
{

    struct Joueur joueur;
    joueur.id = generate_id(index);

    printf("\nNom : ");
    fgets(joueur.nom, sizeof(joueur.nom), stdin);
    joueur.nom[strcspn(joueur.nom, "\n")] = 0;

    printf("Prenom : ");
    fgets(joueur.prenom, sizeof(joueur.prenom), stdin);
    joueur.prenom[strcspn(joueur.prenom, "\n")] = 0;

    printf("Numero Maillot: ");
    scanf("%d", &joueur.numeroMaillot);
    getchar();

    printf("Poste (gardien, defenseur, milieu, attaquant): ");
    fgets(joueur.poste, sizeof(joueur.poste), stdin);
    joueur.poste[strcspn(joueur.poste, "\n")] = 0;

    printf("Age: ");
    scanf("%d", &joueur.age);
    getchar();

    printf("Buts: ");
    scanf("%d", &joueur.buts);
    getchar();

    joueurs[index] = joueur;
    printf("\nAjoute succes.\n");
}

void ajouter_plusieurs_joueurs(struct Joueur joueurs[], int index)
{

    int nombre_joueurs;
    printf("Entrer le nombre de joueures: ");
    scanf("%d", &nombre_joueurs);
    getchar();

    for (int i = 0; i < nombre_joueurs; i++)
    {
        printf("\nJoueur %d: ", i + 1);
        if (joueurs[i].id != 0)
        {
            ajouter_joueur(joueurs, index);
        }
    }
}

int calcule_nbr_joueurs(struct Joueur joueurs[], int size_joueurs)
{
    int nbr_joueurs = 0;
    for (int i = 0; i < size_joueurs; i++)
    {
        if (joueurs[i].id != 0)
        {
            nbr_joueurs++;
        }
    }
    return nbr_joueurs;
}

void trier_noms(struct Joueur joueurs[], int nombre_joueurs)
{

    struct Joueur joueur_temp;
    for (int i = 0; i < nombre_joueurs - 1; i++)
    {
        int swapped = 0;
        for (int j = 0; j < nombre_joueurs - i - 1; j++)
        {
            if (strcmp(joueurs[j].nom, joueurs[j + 1].nom) > 0)
            {
                joueur_temp = joueurs[j];
                joueurs[j] = joueurs[j + 1];
                joueurs[j + 1] = joueur_temp;
                swapped = 1;
            }
        }
        if (!swapped)
        {
            break;
        }
    }
}

void affiche_joueurs_nom(struct Joueur joueurs[], int nombre_joueurs)
{

    trier_noms(joueurs, nombre_joueurs);

    for (int i = 0; i < nombre_joueurs; i++)
    {
        if (joueurs[i].id != 0)
        {
            printf("\nID: %d, Nom: %s, Prenom: %s, Numero Maillot: %d, Poste: %s, Age: %d, Buts: %d.\n", joueurs[i].id, joueurs[i].nom, joueurs[i].prenom, joueurs[i].numeroMaillot, joueurs[i].poste, joueurs[i].age, joueurs[i].buts);
        }
    }
}

void trier_ages(struct Joueur joueurs[], int nombre_joueurs)
{

    struct Joueur joueur_temp;
    for (int i = 0; i < nombre_joueurs - 1; i++)
    {
        int swapped = 0;
        for (int j = 0; j < nombre_joueurs - i - 1; j++)
        {
            if (joueurs[j].age > joueurs[j + 1].age > 0)
            {
                joueur_temp = joueurs[j];
                joueurs[j] = joueurs[j + 1];
                joueurs[j + 1] = joueur_temp;
                swapped = 1;
            }
        }
        if (!swapped)
        {
            break;
        }
    }
}

void affiche_joueurs_age(struct Joueur joueurs[], int nombre_joueurs)
{

    trier_ages(joueurs, nombre_joueurs);

    for (int i = 0; i < nombre_joueurs; i++)
    {
        if (joueurs[i].id != 0)
        {
            printf("\nID: %d, Nom: %s, Prenom: %s, Numero Maillot: %d, Poste: %s, Age: %d, Buts: %d.\n", joueurs[i].id, joueurs[i].nom, joueurs[i].prenom, joueurs[i].numeroMaillot, joueurs[i].poste, joueurs[i].age, joueurs[i].buts);
        }
    }
}

void affiche_joueurs_poste(struct Joueur joueurs[], int nombre_joueurs, char poste[])
{
    for (int i = 0; i < nombre_joueurs; i++)
    {
        if (strcmp(poste, joueurs[i].poste) == 0)
        {
            printf("\nID: %d, Nom: %s, Prenom: %s, Numero Maillot: %d, Poste: %s, Age: %d, Buts: %d.\n", joueurs[i].id, joueurs[i].nom, joueurs[i].prenom, joueurs[i].numeroMaillot, joueurs[i].poste, joueurs[i].age, joueurs[i].buts);
        }
    }
}

int recherche_joueur_id(struct Joueur joueurs[], int nombre_joueurs, int id)
{
    for (int i = 0; i < nombre_joueurs; i++)
    {
        if (id == joueurs[i].id)
        {
            return i;
        }
    }

    return -1;
}

int recherche_joueur_nom(struct Joueur joueurs[], int nombre_joueurs, char nom[])
{
    for (int i = 0; i < nombre_joueurs; i++)
    {
        if (strcmp(nom, joueurs[i].nom) == 0)
        {
            return i;
        }
    }
    return -1;
}

void modifier_poste_joueur(struct Joueur joueurs[], int nombre_joueurs, int id)
{
    int pos_joueur = recherche_joueur_id(joueurs, nombre_joueurs, id);

    if (pos_joueur != -1)
    {

        char new_poste[30];
        printf("Entrer le nouveau poste: ");
        fgets(new_poste, sizeof(new_poste), stdin);
        new_poste[strcspn(new_poste, "\n")] = 0;

        strcpy(joueurs[pos_joueur].poste, new_poste);
    }
    else
    {
        printf("\nLe joueur n'existe pas!\n");
    }
}

void modifier_age_joueur(struct Joueur joueurs[], int nombre_joueurs, int id)
{
    int pos_joueur = recherche_joueur_id(joueurs, nombre_joueurs, id);

    if (pos_joueur != -1)
    {

        int new_age;
        printf("Entrer le nouveau age: ");
        scanf("%d", &new_age);
        getchar();

        joueurs[pos_joueur].age = new_age;
    }
    else
    {
        printf("\nLe joueur n'existe pas!\n");
    }
}

void modifier_buts_joueur(struct Joueur joueurs[], int nombre_joueurs, int id)
{
    int pos_joueur = recherche_joueur_id(joueurs, nombre_joueurs, id);

    if (pos_joueur != -1)
    {

        int new_buts;
        printf("Entrer le nouveau buts: ");
        scanf("%d", &new_buts);
        getchar();

        joueurs[pos_joueur].buts = new_buts;
    }
    else
    {
        printf("\nLe joueur n'existe pas!\n");
    }
}

void supprimer_joueur_id(struct Joueur joueurs[], int nombre_joueurs, int id)
{

    int pos_joueur = recherche_joueur_id(joueurs, nombre_joueurs, id);
    if (pos_joueur != -1)
    {
        struct Joueur joueur = {0};
        joueurs[pos_joueur] = joueur;
    }
    else
    {
        printf("\nLe joueur n'existe pas!\n");
    }
}

float calcule_moyen_age(struct Joueur joueurs[], int nombre_joueurs)
{

    int ages = 0;
    for (int i = 0; i < nombre_joueurs; i++)
    {
        if (joueurs[i].age != 0)
        {
            ages += joueurs[i].age;
        }
    }

    return (float)ages / nombre_joueurs;
}

int main()
{

    int index = 0;
    bool check_1 = true, check_2 = true, check_3 = true, check_5 = true, check_6 = true;
    int nombre_joueurs;
    char poste[30], nom[30];
    int id, pos_joueur;
    float moyen_ages;

    while (true)
    {

        affiche_menu();

        char choix_0;
        printf("\nEntrer votre choix: ");
        scanf("%c", &choix_0);
        getchar();

        switch (choix_0)
        {
        case '1':
            // Ajouter un joueur
            while (check_1)
            {

                printf("\n1. Ajouter un joueur.\n2. Ajouter plusieurs.\n");

                char choix_ajout;
                printf("\nEntrer votre choix: ");
                scanf("%c", &choix_ajout);
                getchar();

                switch (choix_ajout)
                {
                case '1':
                    ajouter_joueur(joueurs, index);
                    index++;
                    check_1 = false;
                    break;
                case '2':
                    ajouter_plusieurs_joueurs(joueurs, index);
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
            while (check_2)
            {

                printf("\n1. les joueurs trier par ordre alphabetique.\n2. les joueurs trier par age.\n3. les joureurs trier par poste.\n#. Menu principale.\n");

                char choix_affiche;
                printf("\nEntrer votre choix: ");
                scanf("%c", &choix_affiche);
                getchar();

                switch (choix_affiche)
                {
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
                    // Afficher Les joueurs par poste;
                    printf("Entrer le poste: ");
                    fgets(poste, sizeof(poste), stdin);
                    poste[strcspn(poste, "\n")] = 0;

                    nombre_joueurs = calcule_nbr_joueurs(joueurs, 100);
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
            // Modifier un joueur
            while (check_3)
            {

                printf("\n1. Modifier le poste d'un joueur.\n2. Modifier l'age d'un joueur.\n3. Modifier le nombre des buts marques par un joueur.\n#. Menu principale.\n");

                char choix_modifier;
                printf("\nEntrer votre choix: ");
                scanf("%c", &choix_modifier);
                getchar();

                switch (choix_modifier)
                {
                case '1':
                    // Modifier le poste d'un joueur (ID)

                    printf("Entrer ID: ");
                    scanf("%d", &id);
                    getchar();

                    nombre_joueurs = calcule_nbr_joueurs(joueurs, 100);
                    modifier_poste_joueur(joueurs, nombre_joueurs, id);

                    check_3 = false;
                    break;
                case '2':
                    // Modifier l'age d'un joueur

                    printf("Entrer ID: ");
                    scanf("%d", &id);
                    getchar();

                    nombre_joueurs = calcule_nbr_joueurs(joueurs, 100);
                    modifier_age_joueur(joueurs, nombre_joueurs, id);

                    check_3 = false;
                    break;
                case '3':
                    // Modifier buts par joueur

                    printf("Entrer ID: ");
                    scanf("%d", &id);
                    getchar();

                    nombre_joueurs = calcule_nbr_joueurs(joueurs, 100);
                    modifier_buts_joueur(joueurs, nombre_joueurs, id);

                    check_3 = false;
                    break;
                case '#':
                    check_3 = false;
                    break;
                default:
                    printf("\nInvalid choix!\n");
                    break;
                }
            }
            check_3 = true;
            break;
        case '4':
            // Supprimer un joueur

            printf("Entrer ID: ");
            scanf("%d", &id);
            getchar();

            nombre_joueurs = calcule_nbr_joueurs(joueurs, 100);
            supprimer_joueur_id(joueurs, nombre_joueurs, id);

            break;
        case '5':
            // Rechercher un joueur
            while (check_5)
            {

                printf("\n1. Recherche un joueur par ID.\n2. Rechercher un joueur par Nom.\n#. Menu principale.\n");

                char choix_recherche;
                printf("\nEntrer votre choix: ");
                scanf("%c", &choix_recherche);
                getchar();

                switch (choix_recherche)
                {
                case '1':
                    // Recherche un joueur par ID

                    printf("Entrer ID: ");
                    scanf("%d", &id);
                    getchar();

                    nombre_joueurs = calcule_nbr_joueurs(joueurs, 100);
                    pos_joueur = recherche_joueur_id(joueurs, nombre_joueurs, id);

                    if (pos_joueur != -1)
                    {
                        printf("\nID: %d, Nom: %s, Prenom: %s, Numero Maillot: %d, Poste: %s, Age: %d, Buts: %d.\n", joueurs[pos_joueur].id, joueurs[pos_joueur].nom, joueurs[pos_joueur].prenom, joueurs[pos_joueur].numeroMaillot, joueurs[pos_joueur].poste, joueurs[pos_joueur].age, joueurs[pos_joueur].buts);
                    }
                    else
                    {
                        printf("\nLe joueur n'existe pas!\n");
                    }

                    check_5 = false;
                    break;
                case '2':
                    // Recherche un joueur par Nom

                    printf("Entrer Nom: ");
                    fgets(nom, sizeof(nom), stdin);
                    nom[strcspn(nom, "\n")] = 0;

                    nombre_joueurs = calcule_nbr_joueurs(joueurs, 100);
                    pos_joueur = recherche_joueur_nom(joueurs, nombre_joueurs, nom);

                    if (pos_joueur != -1)
                    {
                        printf("\nID: %d, Nom: %s, Prenom: %s, Numero Maillot: %d, Poste: %s, Age: %d, Buts: %d.\n", joueurs[pos_joueur].id, joueurs[pos_joueur].nom, joueurs[pos_joueur].prenom, joueurs[pos_joueur].numeroMaillot, joueurs[pos_joueur].poste, joueurs[pos_joueur].age, joueurs[pos_joueur].buts);
                    }
                    else
                    {
                        printf("\nLe joueur n'existe pas!\n");
                    }

                    check_5 = false;
                    break;
                case '#':
                    check_5 = false;
                    break;
                default:
                    printf("\nInvalid choix!\n");
                    break;
                }
            }
            check_5 = true;
            break;
        case '6':
            // Afficher les statistiques
            while (check_6)
            {

                printf("\n1. Afficher le nombre total de joueurs dans equipe.\n2. Afficher l'age moyen des joueurs.\n3. Afficher les joueurs ayant marque plus de X buts.\n4. Afficher le meilleur buteur.\n5. Afficher le joueur le plus jeune et le plus age.\n");

                char choix_statistique;
                printf("\nEntrer votre choix: ");
                scanf("%c", &choix_statistique);
                getchar();

                switch (choix_statistique)
                {
                case '1':
                    // Afficher le nombre total de joueurs

                    nombre_joueurs = calcule_nbr_joueurs(joueurs, 100);
                    printf("\nLe nombre total de joueurs dans equipe: %d\n", nombre_joueurs);

                    break;
                case '2':
                    // Afficher l'age moyen des joueurs

                    nombre_joueurs = calcule_nbr_joueurs(joueurs, 100);
                    moyen_ages = calcule_moyen_age(joueurs, nombre_joueurs);
                    printf("\nL'age moyen des joueurs : %.2f\n", moyen_ages);

                    break;
                case '3':
                    // Afficher les joueurs ayant marque plus de x buts

                    printf("Entrer le buts: ");
                    scanf("%d", &)

                    break;
                default:
                    printf("\nInvalid choix!\n");
                    break;
                }
            }
            check_6 = true;
            break;
        case '7':
            return 0;
            break;
        }
    }

    return 0;
}