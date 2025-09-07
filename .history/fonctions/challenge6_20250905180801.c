#include <stdio.h>

int fibonacci(int niem) {
    int suites_fibonacci[niem];
    int j = 0;

    for (int i=1; i<=niem; i++) {
        suites_fibonacci[i-1] = j;
        j += i;
    }
    
    return suites_fibonacci;
}

int main () {

    int suites_fibonacci[] = fibonacci(6)

    return 0;
}