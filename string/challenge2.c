#include <stdio.h>
#include <string.h>

int main() {

    char chaines[50];
    printf("Entrer une chaine de characteres: ");
    fgets(chaines, sizeof(chaines), stdin);
    chaines[strcspn(chaines, "\n")] = 0;

    int longueur_chaines =  strlen(chaines);
    printf("Longueur de chaine de characteres est: %d", longueur_chaines);

    return 0;
}