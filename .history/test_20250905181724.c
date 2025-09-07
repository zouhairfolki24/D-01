#include <stdio.h>

int les_nombres(int size_tableau) {
    int tableau[size_tableau];

    for (int i=0; i<size_tableau; i++) {
        tableau[i] = 8;
    }

    return tableau[size_tableau];
}

int main() {
    int integers[] = les_nombres(7);

    for (int i=0; i<7; i++) {
        printf("%d\n", integers[i]);
    }

    return 0;
}