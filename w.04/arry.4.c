
#include <stdio.h>

int rep(int arr[], int size) {
    for (int i = 0; i < size; i++)
        for (int j = i + 1; j < size; j++)
            if (arr[i] == arr[j])
                return arr[i];
    return -1;
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    int result = rep(arr, size);

    if (result != -1)
        printf("The repeating element is: %d\n", result);
    else
        printf("No repeating element found.\n");

    return 0;
}
