#include <stdio.h>

int main() {
    int nombre_elements;
    int integers[100];
    int somme = 0;

    printf("Entrer un nombre d'elements: ");
    scanf("%d", &nombre_elements);

    for (int i=0; i<nombre_elements; i++) {
        printf("Sasir un nombre %d: ", i + 1);
        scanf("%d", &integers[i]);   
    }
    
    for (int i=0; i<nombre_elements; i++) {
        printf("%d\n", integers[i]);
        somme = somme + integers[i];
    }

    printf("la somme est: %d\n", somme);

    return 0;
}