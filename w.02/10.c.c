#include <stdio.h>
#include <stdlib.h>

int main() {
    const int correctID = 12345;
    const int correctPassword = 1234;
    int id;
    int pass;
    int x = 3;

    printf("Enter your ID: ");
    scanf("%d", &id);

    if (id == correctID) {
        while (x != 0) {
            printf("Enter your password: ");
            scanf("%d", &pass);

            if (pass == correctPassword) {
                printf("Welcome!\n");
                break;
            } else {
                printf("You are not registered\n");
            }
            x--;
        }
        if (x == 0) {
            printf("No more tries\n");
        }
    } else {
        printf("You are not registered\n");
    }
    return 0;
}
