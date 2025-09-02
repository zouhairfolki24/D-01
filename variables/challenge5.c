#include <stdio.h>

int main() {
    float temperature;
    printf("Entrer la temperature en celsius: ");
    scanf("%f", &temperature);

    if (temperature < 0) {
        printf("Solid\n");
    } else if (temperature >= 0 && temperature < 100) {
        printf("Liquide\n");
    } else {
        printf("Gaz\n");
    }

    return 0;
}