#include <stdio.h>
#include <string.h>

int main() {
    static float prix[3];
    
    prix[0] = 3.0;

    printf("%f", prix[0]);


    return 0;
}