#include <stdio.h>

int main() {
    float vitesse_km;
    printf("Entrer la vitesse en (km/h): ");
    scanf("%f", &vitesse_km);

    float vitesse_ms = vitesse_km * 0.27778;
    printf("La vitesse en (m/s) est: %.2f", vitesse_ms);

    return 0;
}