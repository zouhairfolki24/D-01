#include <stdio.h>

int main()
{
    float temperature_celsuis;
    printf("Veuillez entrer la temperature en celsuis: ");
    scanf("%f", &temperature_celsuis);

    float temperature_kelvin = temperature_celsuis + 273.15;
    printf("le temperature en kelvin est: %.2f", temperature_kelvin);

    
}