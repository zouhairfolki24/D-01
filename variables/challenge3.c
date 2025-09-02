#include <stdio.h>

int main() {
    float distance_km;
    printf("Enrer la distance en kilometres: ");
    scanf("%f", &distance_km);

    float distance_yards = distance_km * 1093.61;
    printf("La distance en yards est: %.2f", distance_yards);

    return 0;
}