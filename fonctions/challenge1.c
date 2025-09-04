#include <stdio.h>

int somme(int number1, int number2) {
    return number1 + number2;
}

int main () {
    int number1;
    int number2;

    printf("Number 1: ");
    scanf("%d", &number1);
    
    printf("Number 2: ");
    scanf("%d", &number2);

    printf("La somme est: %d", somme(number1, number2));

    return 0;
}