#include <stdio.h>
#include <stdbool.h>

void affiche_elements(int integers[], int len_integers) {
    for (int i = 0; i < len_integers; i++) {
        printf("%d\n", integers[i]);
    }
}

int main() {
    int integers[] = {3, 5, 10, 22, 25, 27, 40, 44, 49, 59};
    int len_integers = sizeof(integers) / sizeof(integers[0]);
    
    int valeur;
    printf("Entrer une valeur: ");
    scanf("%d", &valeur);

    affiche_elements(integers, len_integers);

    int is_exist = false;
    for (int i = 0; i < len_integers; i++) {
        if (valeur == integers[i]) {
            is_exist = true;
        }
    }

    if (is_exist) {
        printf("la valeur est exists.\n");
    } else {
        printf("la valeur pas exists.\n");
    }

    return 0;
}