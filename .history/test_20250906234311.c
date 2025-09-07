#include <stdio.h>
#include <stdlib.h>

int main() {
    char *name = (char*) malloc(100 * sizeof(char));
    if (name != NULL) {
        printf("Enter your name: ");
        fgets(name, 100, stdin);
        printf("Hello %s", name);
        free(name);
    }


    return 0;
}