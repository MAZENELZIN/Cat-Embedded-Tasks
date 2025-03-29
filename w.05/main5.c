#include <stdio.h>
#include <stdlib.h>

int main() {
    int x = 10, y = 20, z = 30;
    int *px = &x, *py = &y, *pz = &z;

    printf("Before swapping pointers:\n");
    printf("x = %d, y = %d, z = %d\n", x, y, z);
    printf("px = %p, py = %p, pz = %p\n", (void*)px, (void*)py, (void*)pz);
    printf("*px = %d, *py = %d, *pz = %d\n", *px, *py, *pz);

    printf("\nSwapping pointers.\n");

    pz = px;
    px = py;
    py = pz;

    printf("\nAfter swapping pointers:\n");
    printf("x = %d, y = %d, z = %d\n", x, y, z);
    printf("px = %p, py = %p, pz = %p\n", (void*)px, (void*)py, (void*)pz);
    printf("*px = %d, *py = %d, *pz = %d\n", *px, *py, *pz);

    return 0;
}
