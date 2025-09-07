#include <stdio.h>

int fibonacci (int niem) {

    if (niem == 1) {
        return 1;
    } else {
        return fibonacci(niem - 1) + fibonacci(niem - 2)
    }
}

int main() {
    int f_one = 0;
    int f_two = 1;
    int result = 0;

    for (int i = 0; i < 11; i++) {
        result += f_one + f_two;
    }

    printf("%d", result);

    return 0;
}