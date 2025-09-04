#include <stdio.h>

int multiplication (int number1, int number2) {
    return number1 * number2;
}

int main() {
    int number1;
    int number2;

    printf("Saisir le nombre 1: ");
    scanf("%d", &number1);

    printf("Sasir Number 2: ");
    scanf("%d", &number2);

    printf("le produit est: %d", multiplication(number1, number2));
    
    return 0;
}