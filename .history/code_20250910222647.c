#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void trier_noms(char noms[][30], int size_nom) {

    for (int i = 0; i < size_nom; i++) {
        if (strcmp(noms[i], "\0") != 0) {
            printf("%s\n", noms[i]);
        }
    }

}

int main() {
    char noms[][30] = {"zouhair", "ahmed", "younes"};
    trier_noms(noms, 3);

    return 0;
}