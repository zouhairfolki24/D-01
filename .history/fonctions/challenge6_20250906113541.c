#include <stdio.h>

int fibonacci(int suites_fibonacci[], int niem)
{
    suites_fibonacci[0] = 0;
    suites_fibonacci[1] = 1;

    for (int i = 2; i < niem; i++)
    {
        suites_fibonacci[i] = suites_fibonacci[i - 2] + suites_fibonacci[i - 1];
        [2] = [0] + [1]
        [3] = [1] + [2]
        [4] = [2] + [3]
        [5] = [3] + [4]
        [6]
    }
}

int main()
{

    int suites_fibonacci[10];

    fibonacci(suites_fibonacci, 10);

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", suites_fibonacci[i]);
    }

    return 0;
}