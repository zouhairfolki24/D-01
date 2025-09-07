#include <stdio.h>

void fibonacci(int suites_fibonacci[], int niem)
{
    suites_fibonacci[0] = 0;
    suites_fibonacci[1] = 1;

    for (int i = 2; i <= niem; i++)
    {
        suites_fibonacci[i] = suites_fibonacci[i - 2] + suites_fibonacci[i - 1];
    }
}

int main()
{
    int niem;
    printf("Entrer le nombre pour la suite de fibonacci: ");
    scanf("%d", &niem);

    int size_tableau = 

    int suites_fibonacci[10];

    fibonacci(suites_fibonacci, 10);

    for (int i = 0; i < 1; i++)
    {
        printf("%d\n", suites_fibonacci[i]);
    }

    return 0;
}