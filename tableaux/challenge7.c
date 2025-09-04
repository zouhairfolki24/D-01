#include <stdio.h>

int main() {
    int nombre_elements;
    
    printf("Entrer le nombre d'elements: ");
    scanf("%d", &nombre_elements);

    int integers[nombre_elements];
    for (int i=0; i<nombre_elements; i++) {
        printf("Saisir un nombre %d: ", i + 1);
        scanf("%d", &integers[i]);
    }

    // int valeur1, valeur2;
    // for (int i=0; i<nombre_elements-1; i++) {
    //     if (integers[i+1] < integers[i]) {
    //         valeur1 = integers[i];
    //         valeur2 = integers[i+1];
    //         integers[i] = valeur2;
    //         integers[i+1] = valeur1;
    //     } 
    // }

    for (int i=0; i<nombre_elements; i++) {
        printf("%d\n", integers[i]);
    }

    int minimum = integers[0];
    for (int i=1; i<nombre_elements; i++) {
        if (integers[i] < minimum) {
            minimum = integers[i];
        }
    }

    printf(" minimum est: %d", minimum);

    return 0;
}