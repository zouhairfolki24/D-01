#include <stdio.h>

int main() {
    int number_elements;
    int integers[number_elements];
    printf("Enter your number of elements: ");
    scanf("%d", &number_elements);

    for (int i = 0; i < number_elements; i++) {
        printf("");
        scanf("%d", integers[i]);
    }

    return 0;
}