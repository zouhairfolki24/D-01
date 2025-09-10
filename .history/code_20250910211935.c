#include <stdio.h>
#include <stdbool.h>

void trier_noms(int noms[][30], int size_joueurs) {
    char temp[30];
    for (int i = 0; i < size_joueurs; i++) {
        if (strcmp(noms[i], "\0") != 0) {
            for (int j = 0; j < size_joueurs - 1; j++) {
                if (noms[i][0] > noms[i+1][0]) {
                    strcpy(temp, noms[i+1]);
                    strcpy(noms[i+1], noms[i]);
                    strcpy(noms[i], temp);
                }
            }
        }
    }

    for (int i = 0; i < size_joueurs; i++) {
        if (strcmp(noms[i], "\0") != 0) {
            printf("%s\n", noms[i]);
        }
    }

}

int main() {
    char noms[3][30] = {"zouhair", "mohamed", "younes"};
    trier_noms()

    return 0;
}