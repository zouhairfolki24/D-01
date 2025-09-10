#include <stdio.h>


int main() {
    int integers[10];
    int len = 10;
    
    for (int i = 0; i < len; i++) {
        printf("Entrer un nombre %d: ", i + 1);
        scanf("%d", &integers[i]);
    }


    int valeur_temp;
    for (int i = 0; i < len - 1; i++) {
        
        int swapped = 0;
        for (int j = 0; j < len - i - 1; j++) {
            if (integers[j] > integers[j+1]) {
                valeur_temp = integers[j+1];
                integers[j+1] = integers[j];
                integers[j+1] = valeur_temp;
                swapped = 1;
            }
        }

        if (!swapped) {
            break;
        }

    }

    for (int i = 0; i < len; i++) {
        printf("%d\n", integers[i]);
    }

    return 0;
}