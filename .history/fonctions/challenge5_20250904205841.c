#include <stdio.h>
#include <stdbool.h>

int factorial(int number) {
    int result = 1;
    for (int i=2; i<=number; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int number;

    while (true) {
        printf("Entrer un entier positif: ");
        scanf("%d", &number);
        if (number < 0) {
            printf("Invalid nombre! Veuillez entrer un entier positif.");
        } else {
            break
        }
    }

    printf("%d! = %d", number, factorial(number));

    return 0;
}