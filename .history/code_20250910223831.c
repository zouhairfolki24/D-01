#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void trier_noms(char noms[][30], int size_nom) {

    char valeur_temp[30];
    for (int i = 0; i < size_nom - 1; i++) {
        int swapped = 0;
        for (int j = 0; j < size_nom - i - 1; j++) {
            if (strcmp(noms[j], noms[j+1]) > 0) {
                strcpy(valeur_temp, )
                swapped = 1;
            }
        }
        if (!swapped) {
            break;
        }
    }

    for (int i = 0; i < size_nom; i++) {
        printf("%s\n", noms[i]);
    }
    
}

int main() {
    char noms[][30] = {"zouhair", "ahmed", "younes"};
    trier_noms(noms, 3);

    return 0;
}