#include <stdio.h>

int main() {
    int size, order, temp;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter 0 for ascending order or 1 for descending order: ");
    scanf("%d", &order);

    if (order != 0 && order != 1) {
        printf("Invalid input! Please enter 0 or 1.\n");
        return 1;
    }

    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if ((order == 0 && arr[i] > arr[j]) || (order == 1 && arr[i] < arr[j])) {

                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("The sorted array is:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
