#include <stdio.h>

void bubble_sort(int arr[], int n) {
    int temp;

    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {25, 30, 45, 13, 22, 7, 3, 20};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Array sem método: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n\n");

    bubble_sort(arr, n);

    printf("Array com método: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    } 

    return 0;
}