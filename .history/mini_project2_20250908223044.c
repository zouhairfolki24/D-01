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
    contact.nom[strcspn(contact.nom, "\n")] = 0;

    printf("Entrer le numero de telephone: ");
    fgets(contact.numero_telephone, sizeof(contact.numero_telephone), stdin);
    contact.numero_telephone[strcspn(contact.numero_telephone, "\n")] = 0;

    printf("Entrer le adresse e-mail: ");
    fgets(contact.mail, sizeof(contact.mail), stdin);
    contact.mail[strcspn(contact.mail, "\n")] = 0;

    return contact;

}

void ajoute_contact(struct Contact contacts[], struct Contact contact, int len_contacts, int index) {
    if (strcmp(contacts[index].nom, "\0") == 0 && strcmp(contacts[index].numero_telephone, "\0") == 0 && strcmp(contacts[].mail, "\0") == 0){
        contacts[i] = contact;
        }
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
    
    struct Contact contacts[100] = {{0}};
    struct Contact contact;
    
    while (true) {

        printf("\n1. Ajouter un contact.\n2. Modifier un contact.\n3. Supprimer un contact.\n4. Afficher tous les contacts.\n5. Rechercher un contact.\n6. Quitter.\n\n");
        
        int choix;
        printf("Entrer votre choix: ");
        scanf("%d", &choix);
        getchar();
    
        switch (choix) {
    
            case 1:
                // Ajouter un contact
                contact = get_infos_contact();
                ajoute_contact(contacts, contact, 100, index);
                break;
    
            case 2:
                // Modifier un contact
                // modifier_contact(cnt);

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