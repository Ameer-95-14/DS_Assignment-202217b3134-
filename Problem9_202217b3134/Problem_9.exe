#include <stdio.h>

void selectionSort(int a[], int n) {
    int i, j, minIndex, temp;

    for (i = 0; i < n - 1; i++) {
        minIndex = i;

        // Find the index of the minimum element in the unsorted part of the array
        for (j = i + 1; j < n; j++) {
            if (a[j] < a[minIndex]) {
                minIndex = j;
            }
        }

        // Swap the found minimum element with the first element of the unsorted part
        temp = a[minIndex];
        a[minIndex] = a[i];
        a[i] = temp;
    }
}

void printArr(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main() {
    int a[] = { 12, 31, 25, 8, 32, 17 };
    int n = sizeof(a) / sizeof(a[0]);

    printf("Before sorting array elements are:\n");
    printArr(a, n);

    selectionSort(a, n);

    printf("After sorting array elements are:\n");
    printArr(a, n);

    return 0;
}
