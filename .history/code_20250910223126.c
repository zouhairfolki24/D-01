#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void trier_noms(char noms[][30], int size_nom) {

    char valeur_temp;
    for (int i = 0; i < size_nom - 1; i++) {
        int swapped = 0;
        for (int j = 0; j < size_nom - i - 1; j++) {
            if (strcmp(noms[j], noms[j+1]) > 0) {
                valeur_temp = noms[j+1];
                strcpy(noms[j+1], noms[j]);
                strcpy(noms[j+1], valeur_temp);
                swapped = 1;
            }
        }
    }
    
}

int main() {
    char noms[][30] = {"zouhair", "ahmed", "younes"};
    trier_noms(noms, 3);

    return 0;
}