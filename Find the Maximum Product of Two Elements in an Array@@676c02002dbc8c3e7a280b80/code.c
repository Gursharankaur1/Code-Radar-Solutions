#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int array[n];

    // Input the array
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    // Bubble Sort (Optimized)
    for (int i = 0; i < n - 1; i++) {
        int swapped = 0;
        for (int j = 0; j < n - i - 1; j++) {  // Corrected inner loop limit
            if (array[j] > array[j + 1]) {
                // Swap elements
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                swapped = 1;
            }
        }
        if (!swapped) break;  // Stop if already sorted
    }

    // Print the product of the two largest numbers
    printf("%d\n", array[n - 1] * array[n - 2]);

    return 0;
}
