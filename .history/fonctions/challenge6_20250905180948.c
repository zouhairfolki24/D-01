#include <stdio.h>

int fibonacci(int niem) {
    int suites_fibonacci[niem];
    int j = 0;

    for (int i=1; i<=niem; i++) {
        suites_fibonacci[i-1] = j;
        j += i;
    }
    
    return suites_fibonacci[niem];
}

int main () {

    int suites_fibonacci[] = fibonacci(5);
    
    for (int i=0; i<5; i++) {
        printf("%d\n", suites_fibonacci[i]);
    }

    return 0;
}