#include <stdio.h>
#include <stdlib.h>

int main() {
    char *integers = (int*) malloc(100 * sizeof(char));

    printf("Entrez le titre : ");
    fgets(titres, sizeof(titres), stdin);
    getchar();

    printf("Les titres sont: ");
    for (int i = 0; i < sizeof(titres) / sizeof(titres[0]); i++) {
        printf("%s\n", titres[i]);
    }

    free(titres);

    return 0;
}