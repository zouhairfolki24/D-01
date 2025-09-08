#include <stdio.h>
#include <string.h>

struct phone {
    char name[30];
    char color[15];
    float prix;
};

int main() {
    struct phone p1 = {"Redmi 9", "black", 1500.0};
    struct phone p2 = {"J1 ace", "white", 800};

    printf("Phone 1: \n");
    printf("Name: %s, Color: %s, Prix: %.2f.\n", p1.name, p1.color, p1.prix);
    printf("Phone 1: \n");
    printf("Name: %s, Color: %s, Prix: %.2f.\n", p1.name, p1.color, p1.prix);

    return 0;
}