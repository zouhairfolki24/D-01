#include <stdio.h>

int main()
{
    int a, b;
    int somme;

    printf("a: ");
    scanf("%d", &a);

    printf("b: ");
    scanf("%d", &b);

    if (a != b)
    {
        somme = a + b;
    }
    else
    {
        somme = (a + b) * 3;
    }

    printf("La somme est: %d", somme);

    return 0;
}