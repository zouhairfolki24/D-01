#include <stdio.h>

int main() {
    int f_one = 0;
    int f_two = 1;
    int result = 0;

    for (int i = 0; i < 10; i++) {
        result += f_one + f_two;
    }

    printf("%d", result);

    return 0;
}