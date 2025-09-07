#include <stdio.h>

int fibonacci(int niem) {                                                                          
    switch (niem) {
        case 0:
            return 0;
            
        case 1:
            return 1;
        default:
            return fibonacci(niem - 1) + fibonacci(niem - 2);
    }



    if (niem == 1 || niem == 0)
    {
        return 1;
    }
    else
    {
        return fibonacci(niem - 1) + fibonacci(niem - 2);
    }
}

int main()
{

    printf("%d", fibonacci(5));

    return 0;
}