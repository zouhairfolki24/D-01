#include <stdio.h>
#include <string.h>

void inverse_string (char string[50]){
    for (int i = 49; i >= 0; i--) {
        printf("%")
    }
}

int main() {
    char string[50] = {0};

    printf("Entrer une chaine de characters: ");
    fgets(string, sizeof(string), stdin);
    string[strcspn(string, "\n")] = 0;

    inverse_string(string);

    return 0;
}