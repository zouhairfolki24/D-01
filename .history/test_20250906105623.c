#include <stdio.h>

void les_nombres(int integers, int size_tableau) {

    int tableau[size_tableau];
    for (int i=0; i<size_tableau; i++) {
        tableau[i] = 8;
    }

}

int main() {
    int integers[7] = les_nombres(7);

    for (int i=0; i<7; i++) {
        printf("%d\n", integers[i]);
    }

    return 0;
}