#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char **titres = (char**) malloc(100 * sizeof(char*));
    for (int i = 0; i < 100; i++) {
        titres[i] = (char*) malloc(50 * sizeof(char*))
    }    

    return 0;
}