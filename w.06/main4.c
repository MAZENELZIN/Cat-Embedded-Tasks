#include <stdio.h>
#include <stdlib.h>

int main() {
    char str[100], searchChar;
    int i, index = -1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    printf("Enter a character to search: ");
    scanf("%c", &searchChar);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == searchChar) {
            index = i;
            break;
        }
    }

    if (index != -1) {
        printf("'%c' is found at index %d\n", searchChar, index);
    } else {
        printf("'%c' is not found in the string\n", searchChar);
    }

    return 0;
}
