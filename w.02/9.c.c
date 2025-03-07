#include <stdio.h>
#include <stdlib.h>

int main()
{ int num, factorial = 1;

    printf("Enter an integer: ");
    scanf("%d", &num);

    int i = num;
    while (i > 0) {
        factorial *= i;
        i--;
    }

    printf("Factorial of %d = %d\n", num, factorial);

    return 0;
}


