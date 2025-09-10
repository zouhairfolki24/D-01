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
    contacts[index] = contact;
    }

void modifier_contact(struct Contact contacts[], int len_contacts){
    
    char nom_modifier[30];
    printf("Entrer le nom: ");
    fgets(nom_modifier, sizeof(nom_modifier), stdin);
    nom_modifier[strcspn(nom_modifier, "\n")] = 0;

    bool is_exist = false;
    int index_modifier;
    for (int i = 0; i < len_contacts; i++) {
        if (strcmp(nom_modifier, contacts[i].nom) == 0) {
            index_modifier = i;
            is_exist = true;
        } 
    }
    
    char new_telephone[30];
    char new_mail[50];
    if (is_exist) {
        printf("Entrer le nouveau numero de telephone: ");
        fgets(new_telephone, sizeof(new_telephone), stdin);
        new_telephone[strcspn(new_telephone, "\n")] = 0;
    
        printf("Entrer le nouveau e-mail: ");
        fgets(new_mail, sizeof(new_mail), stdin);
        new_mail[strcspn(new_mail, "\n")] = 0;

        strcpy(contacts[index_modifier].numero_telephone, new_telephone);
        strcpy(contacts[index_modifier].mail, new_mail);
        printf("\nLe contact a ete modifie avec succes.\n");
    } else {
        printf("\nLe contact n'existe pas.\n");
    }


}

void affiche_contacts(struct Contact contacts[],int size_contacts) {
    for (int i = 0; i < size_contacts; i++) {
            if (strcmp(contacts[i].nom, "\0") != 0 && strcmp(contacts[i].numero_telephone, "\0") != 0 && strcmp(contacts[i].mail, "\0") != 0) {
                printf("\nNom: %s, Numero de telephone: %s, Adresse e-mail: %s.\n", contacts[i].nom, contacts[i].numero_telephone, contacts[i].mail);
            }
        }
}

void recherche_contact(struct Contact contacts[], int size_contacts) {
        char nom_recherche[30];
        printf("Entrer le nom: ");
        fgets(nom_recherche, sizeof(nom_recherche), stdin);
        nom_recherche[strcspn(nom_recherche, "\n")] = 0;

        int index_recherche = -1;
        for (int i = 0; i < size_contacts; i++) {
            if (strcmp(nom_recherche, contacts[i].nom) == 0) {
                index_recherche = i;
            }
        }

        if (index_recherche != -1) {
            printf("\nNom: %s, Numero de telephone: %s, Adresse e-mail: %s.\n", contacts[index_recherche].nom, contacts[index_recherche].numero_telephone, contacts[index_recherche].mail);
        } else {
            printf("\nLe contact n'existe pas!\n");
        }
}

void supprimer_contact(struct Contact contacts[], int size_contacts) {
    char nom_supprimer[30];
        printf("Entrer le nom: ");
        fgets(nom_supprimer, sizeof(nom_supprimer), stdin);
        nom_supprimer[strcspn(nom_supprimer, "\n")] = 0;

        int index_supprimer = -1;
        for (int i = 0; i < size_contacts; i++) {
            if (strcmp(nom_supprimer, contacts[i].nom) == 0) {
                index_supprimer = i;
            }
        }

        if (index_supprimer != -1) {
            strcpy(contacts[index_supprimer].nom, "\0");
            strcpy(contacts[index_supprimer].numero_telephone, "\0");
            strcpy(contacts[index_supprimer].mail, "\0");
            printf("\nLe contact a ete supprime avec succes.\n");
        } else {
            printf("\nLe contact n'existe pas!\n");
        }

}

int main() {
    
    struct Contact contacts[100] = {{0}};
    struct Contact contact_add;
    int index = 0;
    
    while (true) {

        printf("\n1. Ajouter un contact.\n2. Modifier un contact.\n3. Supprimer un contact.\n4. Afficher tous les contacts.\n5. Rechercher un contact.\n6. Quitter.\n\n");
        
        int choix;
        printf("Entrer votre choix: ");
        scanf("%d", &choix);
        getchar();
    
        switch (choix) {
    
            case 1:
                // Ajouter un contact
                contact_add = get_infos_contact();
                ajoute_contact(contacts, contact_add, 100, index);
                printf("\nLe contact avec ajoute succes.\n");
                index++;
                break;
    
            case 2:
                // Modifier un contact
                modifier_contact(contacts, 100);
                break;
    
            case 3:
                // Supprimer un contact
                supprimer_contact(contacts, 100);
                break;

            case 4:
                // Afficher tous les contacts
                affiche_contacts(contacts, 100);
                break;

            case 5:
                // Rechercher un contact
                recherche_contact(contacts, 100);
                break;

            case 6:
                // Quitter
                return 0;

            default: 
                printf("Invalid choix!\n");
                break;
    
        }
    }




    return 0;
}