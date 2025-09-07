#include <stdio.h>

int main() {
    char titres[10][50] = {0};

    for (int i = 0; i < 10; i++) {
        printf("%s\n", titres[i]);
    }

    return 0;
}