#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;

    printf("Entrez les coefficients d'une equation 2eme degree:\n\n");

    printf("A: ");
    scanf("%f", &a);

    printf("B: ");
    scanf("%f", &b);

    printf("C: ");
    scanf("%f", &c);

    float delta = pow(b, 2) - 4 * a * c;
    float racine1, racine2;
    float racine_unique;

    if (delta > 0) {
        racine1 = (-b + sqrt(delta)) / (2 * a);
        racine2 = (-b - sqrt(delta)) / (2 * a);
        printf("L'equation a deux solutions distinctes:\nX1 = %.2f, X2 = %.2f\n", racine1, racine2);
    } else if (delta == 0) {
        racine_unique = -b / (2 * a);
        printf("L'equation a une unique solution = %.2f\n", racine_unique);
    } else {
        printf("L'equation n'a pas de solution reelle.\n");
    }

    return 0;
}