#include <stdio.h>
#include <string.h>

void inverse_string (char string[50]){
    for (int i = 49; i >= 0; i--) {
        if (string[i] != '0') {
            string[i];
        }
    }
    for (int i = 0; i < 50; i++) {
        printf("%c", output_string[i]);
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