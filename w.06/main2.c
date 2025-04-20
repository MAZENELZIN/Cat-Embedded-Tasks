#include <stdio.h>
#include <stdlib.h>

int main() {
    char str[100];
    int i, alphabets = 0, digits = 0, specialChars = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            alphabets++;
        } else if (str[i] >= '0' && str[i] <= '9') {
            digits++;
        } else {
            if (str[i] == ' ' || str[i] == '\n') {

            } else {
                specialChars++;
            }
        }
    }

    printf("Total Alphabets: %d\n", alphabets);
    printf("Total Digits: %d\n", digits);
    printf("Total Special Characters: %d\n", specialChars);

    return 0;
}
