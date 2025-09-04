#include <stdio.h>

int main() {
    int nombre_elements;
    int integers[100];

    printf("Entrer un nombre d'elements: ");
    scanf("%d", &nombre_elements);

    for (int i=0; i<nombre_elements; i++) {
        printf("Entrer un nombre %d: ", i + 1);
        scanf("%d", &integers[i]);
    }

    for (int i=0; i<nombre_elements; i++) {
        printf("%d\n", integers[i]);
    }

    int maximum = integers[0];

    for (int i=1; i<nombre_elements; i++) {
        if (integers[i] > maximum) {
            maximum = integers[i];
        }
    }

    printf("le maximum est: %d", maximum);


    return 0;
}