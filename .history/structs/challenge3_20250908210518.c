#include <stdio.h>

struct rectangle {
    int longueur;
    int largeur;
};

int calcule_air(struct rectangle rect) {
    
    return rect.longueur * rect.largeur;
}

int main() {


    return 0;
}