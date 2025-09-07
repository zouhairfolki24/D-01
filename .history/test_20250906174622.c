#include <stdio.h>
#include <stdbool.h>

int fibonacci(int niem) {                                                                          
    switch (niem) {
        case 0:
            return 0;
        case 1:
            return 1;
        default:
            return fibonacci(niem - 1) + fibonacci(niem - 2);
    }
}

int main()
{
    int niem;
    while (1) {

        printf("Entrer le nombre pour la suite de fibonacci: ");
        scanf("%d", &niem);

        if (niem < 0) {
            printf("Invalid nombre! Veuillez entrer le nombre positif.\n");
        } else {
            break;
        }
    }

    printf("%d", fibonacci(niem));

    return 0;
}