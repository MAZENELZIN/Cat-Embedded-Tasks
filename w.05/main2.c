#include <stdio.h>
#include <stdlib.h>

int fun(int *a, int *b) {
    return (*a + *b);
}

int main() {
    int num1, num2, sum;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    sum = fun(&num1, &num2);

    printf("The summation of %d and %d is: %d\n", num1, num2, sum);

    return 0;
}
