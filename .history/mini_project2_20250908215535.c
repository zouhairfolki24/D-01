#include <stdio.h>
#include <string.h>
#include <stdbool.h>

struct Contact {
    char nom[30];
    char numero_telephone[30];
    char mail[50];
};

struct Contact get_infos_contact() {
    struct Contact contact;

    printf("Entrer le nom: ");
    fgets(contact.nom, sizeof(contact.nom), stdin);
    c1.nom[strcspn(c1.nom, "\n")] = 0;

    printf("Entrer le numero de telephone: ");
    fgets(c1.numero_telephone, sizeof(c1.numero_telephone), stdin);
    c1.numero_telephone[strcspn(c1.numero_telephone, "\n")] = 0;

    printf("Entrer le adresse e-mail: ");
    fgets(c1.mail, sizeof(c1.mail), stdin);
    c1.mail[strcspn(c1.mail, "\n")] = 0;

    return c1;

}

void modifier_contact(struct Contact *cnt){
    char nom_modifier[30];
    printf("Entrer le nom: ");
    fgets(nom_modifier, sizeof(nom_modifier), stdin);
    nom_modifier[strcspn(nom_modifier, "\n")] = 0;

    char new_telephone[30];
    char new_mail[30];
    if (strcmp(nom_modifier, cnt->nom) == 0) {
        printf("Entrer le nouveau numero de telephone: ");
        fgets(new_telephone, sizeof(new_telephone), stdin);
        new_telephone[strspn(new_telephone, "\n")] = 0;

        printf("Entrer le nouveau e-mail: ");
        fgets(new_mail, sizeof(new_mail), stdin);
        new_mail[strspn(new_mail, "\n")] = 0;

        strcpy(cnt->numero_telephone, new_telephone);
        strcpy(cnt->mail, new_mail);

    } else {
        printf("Le contact n'existe pas.\n");
    }
    
}


int main() {
    
    struct Contact cnt = {"", "", ""};
    struct Contact contacts[100] = {0};
    int j = 0;
    
    while (true) {

        printf("\n1. Ajouter un contact.\n2. Modifier un contact.\n3. Supprimer un contact.\n4. Afficher tous les contacts.\n5. Rechercher un contact.\n6. Quitter.\n\n");
        
        int choix;
        printf("Entrer votre choix: ");
        scanf("%d", &choix);
        getchar();
    
        switch (choix) {
    
            case 1:
                // Ajouter un contact
                struct Contact contact = get_infos_contact();
                contacts[j] = cnt;
                j++;
                break;
    
            case 2:
                // Modifier un contact
                modifier_contact(&cnt);

                break;
    
            case 3:
                // Supprimer un contact
                break;

            case 4:
                // Afficher tous les contacts
                for (int i = 0; i < 100; i++) {
                    if (strcmp(contacts[i].nom, "\0") != 0 && strcmp(contacts[i].numero_telephone, "\0") != 0 && strcmp(contacts[i].mail, "\0") != 0) {
                        printf("\nNom: %s, Numero de telephone: %s, Adresse e-mail: %s.\n", contacts[i].nom, contacts[i].numero_telephone, contacts[i].mail);
                    }
                }
                // printf("\nNom: %s, Numero de telephone: %s, Adresse e-mail: %s.\n", cnt.nom, cnt.numero_telephone, cnt.mail);
                break;

            case 5:
                // Rechercher un contact
                break;

            case 7:
                // Quitter
                return 0;

            default: 
                printf("Invalid choix!\n");
                break;
    
        }
    }




    return 0;
}