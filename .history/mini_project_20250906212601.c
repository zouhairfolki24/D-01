#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{

    char titres[100][50];
    char auteurs[100][50];
    float prix[100];
    int quantites[100];
    int nombre_livres;
    char titre_modifier[50];
    int index_quantite;
    int new_quantite;
    bool is_exist = false;
    char titre_recherche[50];
    int index_titre;
    
    while (true) {
        
        printf("\n1. Ajouter un livre au stock.\n2. Afficher tous les livres.\n3. Rechercher un livre par son titre.\n4. Mettre a jour la quantite d'un livre.\n5. Supprimer un livre du stock.\n6. Afficher le nombre total de livres en stock.\n");

        char choix_user;
        printf("\nEntrer votre choix: ");
        scanf("%c", &choix_user);
        getchar();

        switch (choix_user) {
            case '1':
                // Ajouter les livres
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
                //Rechercher un livre par son titre
                printf("Entrer le titre: ");
                fgets(titre_recherche, sizeof(titre_recherche), stdin);
                titre_recherche[strcspn(titre_recherche, "\n")] = 0;

                for (int i = 0; i < nombre_livres; i++) {
                    if (strcmp(titre_recherche, titres[i]) == 0) {
                        index_titre = i;
                    }
                }

                printf("\n .Titre: %s\n .Auteur: %s\n .Prix: %.2f\n .Quantite: %d\n", titres[index_titre], auteurs[index_titre], prix)

                break;
            
            case '4':
                // Mettre a jour la quantite d'un livre
                printf("Saisir le titre du livre: ");
                fgets(titre_modifier, sizeof(titre_modifier), stdin);
                titre_modifier[strcspn(titre_modifier, "\n")] = 0;

                for (int i = 0; i < nombre_livres; i++) {
                    if (strcmp(titre_modifier, titres[i]) == 0) {
                        index_quantite = i;
                        is_exist = true;
                    }
                }

                if (is_exist) {
                    printf("Entrer la nouvelle quantite: ");
                    scanf("%d", &new_quantite);
                    getchar();

                    quantites[index_quantite] = new_quantite;

                    printf("Quantite mise a jour avec succes!\n");
                    
                    is_exist = false;
                } else {
                    printf("Livre non trouve.\n");
                }

                break;

            default:
                printf("Invalid choix!\n");
                break;
        }


    }


    return 0;
}