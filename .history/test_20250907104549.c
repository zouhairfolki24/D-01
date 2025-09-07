#include <stdio.h>

int main() {
    char titres[10][50] = {NULL};

    for (int i = 0; i < 10; i++) {
        printf("Titre: "%s\n", titres[i]);
    }

    return 0;
}