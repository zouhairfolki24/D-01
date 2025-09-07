#include <stdio.h>

int main() {
    char titres[10][50] = {{0}};
    static float prix[10];

    for (int i = 0; i < 10; i++) {
        printf("titre: '%s'\n", titres[i]);
    }
    
    for (int i = 0; i < 10; i++) {
        printf("prix: '%'\n", titres[i]);
    }
    


    return 0;
}