#include <stdio.h>

int main() {
    int nombre;
    int somme = 0;

    printf("Entrer un nombre entier: ");
    scanf("%d", &nombre);

    for (int i=1; i<=nombre; i++) {
        somme = somme + i;
    }

    printf("la somme est: %d", somme);


    return 0;
}