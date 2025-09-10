#include <stdio.h>


int main() {
    int integers[10];
    
    for (int i = 0; i < 10; i++) {
        printf("Entrer un nombre %d: ", i + 1);
        scanf("%d", &integers[i]);
    }


    int valeur_temp;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 9; j++) {
            if (integers[j]  integers[j+1]) {
                valeur_temp = integers[j+1];
                integers[j+1] = integers[j];
                integers[j] = valeur_temp;
            }
        }
    }

    for (int i = 0; i < 10; i++) {
        printf("%d\n", integers[i]);
    }

    return 0;
}