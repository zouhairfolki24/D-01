#include <stdio.h>

int main() {
    char nom[15];
    char prenom[15];
    int age;
    char sexe[15];
    char email[30];

    printf("Veuillez entrer le nom: ");
    scanf("%s", &nom);
    
    printf("Veuillez entrer le prenom: ");
    scanf("%s", &prenom);
        
    printf("Veuillez entrer l'age: ");
    scanf("%d", &age);
    
    printf("Veuillez entrer le sexe: ");
    scanf("%s", &sexe);

    printf("Veuillez entrer Email: ");
    scanf("%s", &email);

    printf("Nom: %s\nPrenom: %s\nAge: %d\nSexe: %s\nEmail: %s\n", nom, prenom, age, sexe, email);

    return 0;
}