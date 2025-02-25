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

    int max1 = INT_MIN, max2 = INT_MIN;

    for (int j = 0; j < n; j++) {
        if (array[j] > max1) {
            max2 = max1;
            max1 = array[j];
        } else if (array[j] < max1 && array[j] > max2) {  // Ensure distinct values
            max2 = array[j];
        }
    }

    if (max2 == INT_MIN) {  // If no second largest number was found
        printf("-1\n");
    } else {
        printf("%d\n", max2);
    }

    return 0;
}
