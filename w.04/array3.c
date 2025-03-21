#include <stdio.h>
#include <stdlib.h>
int main() {
    int size, i, j, isUnique;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Unique Elements in the given array are:\n");
    for (i = 0; i < size; i++) {
        isUnique = 1;
        for (j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                isUnique = 0;
                break;
            }
        }
        if (isUnique) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}

