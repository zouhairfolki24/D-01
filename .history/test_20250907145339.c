#include <stdio.h>
#include <string.h>

int main() {
    char titres[3][50] = {{0}};

    strcpy(titres[0], "les mesirables");
    
    for (int i = 0; i < 3; i++) {
        printf("Titre: \"%s\"\n", titres[i]);
    }
    
    strcpy(titres[0])

    for (int i = 0; i < 3; i++) {
        printf("Titre: \"%s\"\n", titres[i]);
    }
    

    return 0;
}