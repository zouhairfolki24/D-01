#include <stdio.h>
#include <stdbool.h>

int main() {
    int len_integers = 8;

    int first_index = 0;
    int last_index = len_integers - 1;
    int k = (first_index + last_index) / 2;
    
    printf("%f", k);

    return 0;
}