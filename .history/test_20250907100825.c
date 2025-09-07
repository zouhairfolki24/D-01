#include <stdio.h>
#include <stdlib.h>
#inlcude <string.h>

int main() {
    char *name = (char*) malloc(50 * sizeof(char));

    printf("Entrez le name : ");
    fgets(name, 50, stdin);
    name[strcspn()]

    printf("le nome est: ");
    for (int i = 0; i < sizeof(name) / sizeof(name[0]); i++) {
        printf("%s\n", name[i]);
    }

    free(name);

    return 0;
}