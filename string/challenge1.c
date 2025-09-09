#include <stdio.h>
#include <string.h>

int main() {

    char chaines[50];
    printf("Entrer une chaine de characteres: ");
    fgets(chaines, sizeof(chaines), stdin);
    chaines[strcspn(chaines, "\n")] = 0;

    printf("%s\n", chaines);


    return 0;
}