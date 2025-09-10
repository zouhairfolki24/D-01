#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void trier_noms(char noms[][30], int size_nom) {
    char temp[30];
    for (int i = 0; i < size_nom; i++) {
        for (int j = 0; j < size_nom - 1; j++) {
            if (strcmp(noms[j] > noms[j+1])) {
                strcpy(temp, noms[j+1]);
                strcpy(noms[j+1], noms[j]);
                strcpy(noms[j], temp);
                }
            }
        }

    for (int i = 0; i < size_nom; i++) {
        if (strcmp(noms[i], "\0") != 0) {
            printf("%s\n", noms[i]);
        }
    }

}

int main() {
    char noms[][30] = {"zouhair", "mohamed", "younes"};
    trier_noms(noms, 3);

    return 0;
}