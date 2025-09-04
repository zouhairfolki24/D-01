#include <stdio.h>

int main()
{
    char fullName[15];
    char titre[12];

    printf("Enter full Name: ");
    fgets(fullName, sizeof(fullName), stdin);
    
    printf("Enter titre: ");
    fgets(titre, sizeof(titre), fullName);
    
    printf("%s", fullName);
    printf("")

    return 0;
}