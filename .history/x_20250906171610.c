#include <stdio.h>

int main() {
    int n;
    printf("Entrer le nombre pour la suite de Fibonacci: ");
    scanf("%d", &n);

    printf("F(%d) = %d\n", n, fibonacci(n));

    return 0;
}
