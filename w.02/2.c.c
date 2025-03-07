#include <stdio.h>
#include <stdlib.h>

int main() {
    int x;
    printf(" enter the number : ");
    scanf("%d", &x);

    if (x % 2 == 0) {
        printf("the number is even \n");
    } else {
        printf("the number is odd \n");
    }

    return 0;
}
