#include <stdio.h>
#include <limits.h>  // For INT_MIN and INT_MAX

int main() {
    int n;
    scanf("%d", &n);

    int array[n];

    // Input array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    // Initialize variables to store the two largest and two smallest numbers
    int max1 = INT_MIN, max2 = INT_MIN;
    int min1 = INT_MAX, min2 = INT_MAX;

    // Find the two largest and two smallest numbers in one pass (O(n))
    for (int i = 0; i < n; i++) {
        if (array[i] > max1) { 
            max2 = max1;
            max1 = array[i];
        } else if (array[i] > max2) {
            max2 = array[i];
        }

        if (array[i] < min1) {
            min2 = min1;
            min1 = array[i];
        } else if (array[i] < min2) {
            min2 = array[i];
        }
    }

    // Maximum product can be from max1*max2 OR min1*min2 (for negative numbers)
    int maxProduct = (max1 * max2 > min1 * min2) ? (max1 * max2) : (min1 * min2);

    printf("%d\n", maxProduct);

    return 0;
}
