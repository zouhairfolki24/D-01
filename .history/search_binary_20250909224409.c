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
    bool is_exist = false;

    while (first_index <= last_index) {

        int m = (first_index + last_index) / 2;
        
        if (nombre > integers[m]) {
            first_index = m + 1;
        } else if (nombre < integers[m]) {
            last_index = m - 1;
        } else {
            printf("le nombre existe.\n");
            is_exist = true;
            break;
        }
    
    }
    
    if (!is_exist) {
        printf("le nombre n'existe pas.\n");
    }

    return 0;
}