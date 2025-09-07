#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *name = (char*) malloc(50 * sizeof(char));

    printf("Entrez le nom : ");
    fgets(name, 50, stdin);
    name[strcspn(name, "\n")] = 0;

    printf("le nom est: %s\n", name);
    for (int i = 0; i < sizeof(name) / sizeof(name[0]); i++) {
        printf("%s\n", name[i]);
    }

    free(name);

    return 0;
}