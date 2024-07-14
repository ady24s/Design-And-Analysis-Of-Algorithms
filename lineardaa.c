#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void linearSearchFirstOccurrence(int arr[], int size, int target) {
    int i;

    for (i = 0; i < size; i++) {
        if (arr[i] == target) {
            printf("Element found at %d index\n", i);
            return; 
        }
    }

    printf("Element not found in the array\n");
}

int main() {
    int n, target;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int* arr = (int*)malloc(n * sizeof(int));

    printf("Generated array: ");
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100;
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Enter the target element: ");
    scanf("%d", &target);

    clock_t start_time = clock();
    linearSearchFirstOccurrence(arr, n, target);
    clock_t end_time = clock();

    double time_spent = (double)(end_time - start_time) / CLOCKS_PER_SEC;
    printf("Execution time for linear search: %.6f seconds\n", time_spent);

    free(arr);

    return 0;
}
