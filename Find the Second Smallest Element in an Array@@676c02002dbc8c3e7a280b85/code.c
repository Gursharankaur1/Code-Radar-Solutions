#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n < 2) {  // If there is only one element, return -1 immediately
        printf("-1\n");
        return 0;
    }

    int array[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    int min1 = INT_MAX, min2 = INT_MAX;

    for (int j = 0; j < n; j++) {
        if (array[j] < min1) {
            min2 = min1;
            min1 = array[j];
        } else if (array[j] > min1 && array[j] < min2) {  // Ensure distinct values
            min2 = array[j];
        }
    }

    if (min2 == INT_MAX) {  // If no second smallest number was found
        printf("-1\n");
    } else {
        printf("%d\n", min2);
    }

    return 0;
}
