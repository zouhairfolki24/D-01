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
    
    int nombre;
    printf("Entrer un nombre: ");
    scanf("%d", &nombre);

    affiche_elements(integers, len_integers);

    int first_index = 0;
    int last_index = len_integers - 1;
    
    while (true) {
        int k = (first_index + last_index) / 2;
        
        if (first_index == len_integers - 1 || last_index == 0) {
            printf("le nombre pas exists.\n");
            break;
        }
        
        
        if (nombre > integers[k]) {
            first_index = k + 1;
        } else if (nombre < integers[k]) {
            last_index = k - 1;
        } else {
            printf("le nombre est exists.\n");
            break;
        }

    }


    return 0;
}