#include <stdio.h>
#include <stdlib.h>

const int correctID = 12345;
const int correctPassword = 1234;

int checkID(int id);
int checkPassword(int pass);

int main() {
    int id;
    int pass;
    int x = 3;

    printf("Enter your ID: ");
    scanf("%d", &id);

    if (checkID(id)) {
        while (x != 0) {
            printf("Enter your password: ");
            scanf("%d", &pass);

            if (checkPassword(pass)) {
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

int checkID(int id) {
    return id == correctID;
}

int checkPassword(int pass) {
    return pass == correctPassword;
}
