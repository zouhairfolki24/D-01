#include <stdio.h>
#include <stdbool.h>

int main() {
    char choix;
    printf("Entrer une character: ");
    scanf("%c", &choix);
    
    if (choix == '1') {
        printf("succes\n");
    }

    return 0;
}