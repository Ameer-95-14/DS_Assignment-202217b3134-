#include <stdio.h>

/* Function to merge two halves arr[beg..mid] and arr[mid+1..end] of array arr[] */
void merge(int arr[], int beg, int mid, int end) {
    int i, j, k;
    int n1 = mid - beg + 1;
    int n2 = end - mid;

    int LeftArray[n1], RightArray[n2]; // Temporary arrays for left and right halves

    /* Copy data to temp arrays LeftArray[] and RightArray[] */
    for (i = 0; i < n1; i++)
        LeftArray[i] = arr[beg + i];
    for (j = 0; j < n2; j++)
        RightArray[j] = arr[mid + 1 + j];

    /* Merge the temp arrays back into arr[beg..end] */
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = beg; // Initial index of merged subarray

    while (i < n1 && j < n2) {
        if (LeftArray[i] <= RightArray[j]) {
            arr[k] = LeftArray[i];
            i++;
        } else {
            arr[k] = RightArray[j];
            j++;
        }
        k++;
    }

    /* Copy the remaining elements of LeftArray[], if any */
    while (i < n1) {
        arr[k] = LeftArray[i];
        i++;
        k++;
    }

    /* Copy the remaining elements of RightArray[], if any */
    while (j < n2) {
        arr[k] = RightArray[j];
        j++;
        k++;
    }
}

/* Recursive function to sort an array using merge sort */
void mergeSort(int arr[], int beg, int end) {
    if (beg < end) {
        int mid = beg + (end - beg) / 2; // Calculate mid to avoid overflow

        // Sort first and second halves recursively
        mergeSort(arr, beg, mid);
        mergeSort(arr, mid + 1, end);

        // Merge the sorted halves
        merge(arr, beg, mid, end);
    }
}

/* Function to print an array */
void printArray(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

/* Main function */
int main() {
    int arr[] = {12, 31, 25, 8, 32, 17, 40, 42};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Before sorting array elements are:\n");
    printArray(arr, n);

    mergeSort(arr, 0, n - 1);

    printf("After sorting array elements are:\n");
    printArray(arr, n);

    return 0;
}
