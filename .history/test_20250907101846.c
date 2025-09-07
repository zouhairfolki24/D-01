#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char **titres = (char**) malloc(100 * sizeof(char*));
    for (int i = 0; i < 100; i++) {
        titres[i] = (char*) malloc(50 * sizeof(char));
    }    

    for (int i = 0; i < 100; i++) {
        printf("Entrez le titre du livre %d: ", i + 1);
        fgets(titres[i], 50, stdin);
        titres[i][strcspn(titres[i], "\n")] = 0;
    }

    return 0;
}