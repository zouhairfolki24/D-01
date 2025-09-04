#include <stdio.h>

int main() {
    int nombre_elements;
    int facteur;
    
    printf("Entrer le nombre d'elements: ");
    scanf("%d", &nombre_elements);
    
    
    printf("Saisir un facteur: ");
    scanf("%d", &facteur);
    
    int integers[nombre_elements];
    
    for (int i=0; i<nombre_elements; i++) {
        printf("Entrer un nombre %d: ", i + 1);
        scanf("%d", &integers[i]);
    }
    
    int integers_par_facteur[nombre_elements];

    for (int i=0; i<nombre_elements; i++) {
        integers_par_facteur[i] = integers[i] * facteur;
    }

    printf("les nombres par facteur est: \n");
    for (int i=0; i<nombre_elements; i++) {
        printf("%d\n", integers_par_facteur[i]);
    }

    return 0;
}