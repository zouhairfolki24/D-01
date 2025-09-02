#include <stdio.h>
#include <stdbool.h>

int main()
{

    char charactere;
    bool is_voyelle;

    printf("Enrer une charactere: ");
    scanf("%c", &charactere);

    switch (charactere) {
        case 'a':
            is_voyelle = true;
            break;
        case 'e':
            is_voyelle = true;
            break;
        case 'i':
            is_voyelle = true;
            break;
        case 'o':
            is_voyelle = true;
            break;   
        case 'u':
            is_voyelle = true;
            break; 
        case 'y':
            is_voyelle = true;
            break;
        default:
            is_voyelle = false;
    }

    if (is_voyelle) {
        printf("une voyelle.\n");
    } else {
        printf("Pas une voyelle.\n");
    }

    return 0;
}