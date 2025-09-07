#include <stdio.h>
#include <stdlib.h>

int main() {
    char *name = (char*) malloc(50 * sizeof(char));

    printf("Entrez le titre : ");
    fgets(name, sizeof(name), stdin);
    getchar();

    printf("le nome est: ");
    for (int i = 0; i < sizeof(name) / sizeof(titres[0]); i++) {
        printf("%s\n", titres[i]);
    }

    free(titres);

    return 0;
}