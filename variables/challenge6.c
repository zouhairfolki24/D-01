#include <stdio.h>

int main() {
    float a, b;
    
    printf("Entrer un nombre a: ");
    scanf("%f", &a);

    printf("Entrer un nombre b: ");
    scanf("%f", &b);

    printf("%.2f + %.2f = %.2f\n", a, b, a + b);
    printf("%.2f * %.2f = %.2f\n", a, b, a * b);
    printf("%.2f - %.2f = %.2f\n", a, b, a - b);
    printf("%.2f / %.2f = %.2f\n", a, b, a / b);

    return 0;
}