#include <stdio.h>

void selection_sort(int arr[], int n) {
    int min_index, temp;

    for(int i = 0; i < n - 1; i++) {
        min_index = i;
        for(int j = i + 1; j < n; j++) {
            if(arr[j] < arr[min_index]) {
                min_index = j;
            }
        }

        temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
}

int main() {
    int arr[] = {52, 60, 35, 22, 33, 15, 10, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Array sem método: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n\n");

    selection_sort(arr, n);

    printf("Array com método: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n\n");

    return 0;

}