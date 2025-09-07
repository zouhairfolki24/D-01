#include <stdio.h>

int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    int a = 0, b = 1, result;

    for (int i = 2; i <= n; i++) {
        result = a + b;
        a = b;
        b = result;
    }

    return b;
}

int main() {
    int n;
    printf("Entrer le nombre pour la suite de Fibonacci: ");
    scanf("%d", &n);

    printf("F(%d) = %d\n", n, fibonacci(n));

    return 0;
}
