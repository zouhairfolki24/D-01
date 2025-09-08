#include <stdio.h>

struct rectangle {
    int longueur;
    int largeur;
};

int calcule_air(struct rectangle rect1) {
    return rect1.longueur * rect1.largeur;
}

int main() {
    

    return 0;
}