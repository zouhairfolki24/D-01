#include <stdio.h>

struct livre {
    float prix;
    int quantite;
};

int main() {
    struct livre l1;
    struct livre l2;

    l1.prix = 1200.0;
    l1.quantite = 30;

    l2.prix = 

    printf("Prix: %.2f\n", l1.prix);
    printf("Quantite: %d\n", l1.quantite);

    return 0;
}