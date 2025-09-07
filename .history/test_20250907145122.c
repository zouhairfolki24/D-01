#include <stdio.h>
#include <string.h>

int main() {
    char titres[3][50] = {{0}};

    strcpy(titres[0], "les mesirables");

    for (int i = 0; i < 3; i++) {
        printf("'%s'\n", titres[i]);
    }

    for (int i = 0; i < 3; i++) {
        if (strcmp(titres[i], "\0") != 0) {

        }
    }

    for (int i = 0; i < 3; i++) {
            printf("\nLivre %d:\n", i + 1);
            printf("Titre: %s);
        }

    return 0;
}