#include <stdio.h>

int fibonacci(int niem)
{
    int suites_fibonacci[niem + 1];
    suites_fibonacci[0] = 0;
    suites_fibonacci[1] = 1;

    for (int i = 2; i < niem + 1; i++)
    {
        suites_fibonacci[i] = suites_fibonacci[i - 2] + suites_fibonacci[i - 1];
    }

    int suites_fibonacci[niem + 1]

    return result;
}

int main()
{
    int niem;
    printf("Entrer le nombre pour la suite de fibonacci: ");
    scanf("%d", &niem);

    int size_tableau = niem + 1;
    int suites_fibonacci[size_tableau];

    fibonacci(suites_fibonacci, niem);

    for (int i = 0; i < size_tableau; i++)
    {
        printf("%d\n", suites_fibonacci[i]);
    }

    return 0;
}