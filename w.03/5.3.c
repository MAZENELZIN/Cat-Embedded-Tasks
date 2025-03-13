#include <stdio.h>
#include <stdlib.h>

int fibonacci(int m);

int main() {
    int num, f;
    printf("enter the number: ");
    scanf("%d", &num);
    f = fibonacci(num);
    printf("Fibonacci of %d is %d\n", num, f);
    return 0;
}

int fibonacci(int m) {
    int f;
    if (m == 0) {
        return 0;
    } else if (m == 1) {
        return 1;
    } else { f= (m-1)+(m-2);
        return f;
    }
}

