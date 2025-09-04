#include <stdio.h>

int factorial(int number) {
    int result = 1;
    for (int i=2; i<=number; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int number;
    
    do {
        printf("Entrer un entier positif: ");
        scanf("%d", &number);
    } while (number <);

    printf("%d! = %d", number, factorial(number));

    return 0;
}