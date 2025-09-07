#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{

    char titres[100][50];
    char auteurs[100][50];
    float prix[100];
    int quantites[100];

    while (true)
    {

        printf("\n1. Ajouter un livre au stock.\n2. Afficher tous les livres.\n3. Rechercher un livre par son titre.\n4. Mettre a jour la quantite d'un livre.\n5. Supprimer un livre du stock.\n6. Afficher le nombre total de livres en stock.\n");

        char choix_user;
        printf("\nEntrer votre choix: ");
        scanf("%c", &choix_user);
        getchar();

        switch (choix_user)
        {
        case '1':
            // Ajouter les livres
            int nombre_livres;
            printf("Entrer le nombre des livre: ");
            scanf("%d", &nombre_livres);
            getchar();

            printf("\n***Saisir les informations***\n");
            for (int i = 0; i < nombre_livres; i++)
            {
                printf("\nLivre %d: \n\n", i + 1);

                printf("Entrer le Titre du livre %d: ", i + 1);
                fgets(titres[i], sizeof(titres[i]), stdin);
                titres[i][strcspn(titres[i], "\n")] = 0;

                printf("Entrer l'auteur du livre %d: ", i + 1);
                fgets(auteurs[i], sizeof(auteurs[i]), stdin);
                auteurs[i][strcspn(auteurs[i], "\n")] = 0;

                printf("Entrer le prix du livre %d: ", i + 1);
                scanf("%f", &prix[i]);

                printf("Entrer le quantite en stock du livre %d: ", i + 1);
                scanf("%d", &quantites[i]);

                getchar();
            }
            break;
        case '2':
            // Afficher tous les livres disponibles
            for (int i = 0; i < nombre_livres; i++)
            {
                printf("\nLivre %d:\n", i + 1);
                printf("Titre: %s, Auteur: %s, Prix: %.2f, Quantite: %d\n", titres[i], auteurs[i], prix[i], quantites[i]);
            }
            break;

        case '3':
            // Rechercher un livre par son titre
            // char titre_user[50];
            // printf("Saisir le titre d'une livre: ");
            // fgets(titre_user, sizeof(titre_user), stdin);
            break;

        case '4':
            // Mettre a jour la quantite d'un livre
            char titre_modifier[50];
            printf("Saisir le titre pour modifier un livre: ");
            fgets(titre_modifier, sizeof(titre_modifier), stdin);
            titre_modifier[strcspn(titre_modifier, "\n")] = 0;

            int index_titre;
            for (int i = 0; i < nombre_livres; i++)
            {
                if (titre_modifier == titres[i])
                {
                    index_titre = i;
                }
            }

            int new_quantite;
            printf("Entrer la nouvelle quantite: ");
            scanf("%d", &new_quantite);

            break;

        default:
            printf("Invalid choix!\n");
            break;
        }
    }

    return 0;
}