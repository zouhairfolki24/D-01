#include <stdio.h>

int fibonacci(int niem)
{

    if (niem == 1)
    {
        return 1;
    }
    else
    {
        return fibonacci(niem - 1) + fibonacci(niem - 2)
    }
}

int main()
{

    printf("%d", fibonacci(5));

    return 0;
}