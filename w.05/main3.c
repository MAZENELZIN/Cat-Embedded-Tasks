#include <stdio.h>
#include <stdlib.h>

int scalarMultiplication(int *arr1, int *arr2, int size) {
    int result = 0;
    for (int i = 0; i < size; i++) {
        result += arr1[i] * arr2[i];
    }
    return result;
}

int main() {
    int arr1[] = {1, 2, 3};
    int arr2[] = {4, 5, 6};
    int size = sizeof(arr1) / sizeof(arr1[0]);

    int result = scalarMultiplication(arr1, arr2, size);

    printf("The scalar multiplication of the two arrays is: %d\n", result);

    return 0;
}
