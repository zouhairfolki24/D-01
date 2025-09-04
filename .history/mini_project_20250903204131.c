#include <stdio.h>

int main()
{
    printf("\n1. Ajouter un livre au stock.\n2. Afficher tous les livres.\n3. Rechercher un livre par son titre.\n4. Mettre a jour la quantite d'un livre.\n5. Supprimer un livre du stock.\n6. Afficher le nombre total de livres en stock.\n");

    int nombre_livres;
    printf("\nEntrer le nombre des livre: ");
    scanf("%d", &nombre_livres);

    char titres[nombre_livres];
    char auteurs[nombre_livres];
    float prix[nombre_livres];
    int quantites[nombre_livres];

    // Ajouter un livre
    printf("\n***Saisir les informations***\n");
    for (int i = 0; i < nombre_livres; i++)
    {
        printf("\nLivre %d: \n\n", i + 1);

        printf("Entrer le Titre du livre %d: ", i + 1);
        scanf("%s", &titres[i]);

        printf("Entrer l'auteur du livre %d: ", i + 1);
        scanf("%s", &auteurs[i]);

        printf("Entrer le prix du livre %d: ", i + 1);
        scanf("%f", &prix[i]);

        printf("Entrer le quantite en stock du livre %d: ", i + 1);
        scanf("%d", &quantites[i]);
    }
    // Afficher tous les livres disponibles
    for (int i=0; i<nombre_livres; i++) {
        printf("Titre %d: %s, Auteur %d: %s, Prix %d: %s, Quantite %d: %");
    }

    return 0;
}