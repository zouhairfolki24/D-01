#include <stdio.h>

int main() {
    float prix[10] = {0};

    for (int i = 0; i < 10; i++) {
        printf("prix: \"%f\\n", prix[i]);
    }

    return 0;
}