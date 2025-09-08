#include <stdio.h>

struct rectangle {
    int longueur;
    int largeur;
};

int calcule_air(struct rectangle rect1) {
    return rect1.longueur * rect1.largeur;
}

int main() {
    struct rectangle rect1;

    int longueur, largeur;

    printf("Entrer le longueur: ");
    scanf("%d", &longueur);
    rect1.

    printf("Entrer le largeur: ");
    scanf("%d", &largeur);

    printf("L'aire de rectangle est: %d\n", calcule_air(rect1));

    return 0;
}