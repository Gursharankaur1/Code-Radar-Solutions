#include <stdio.h>
int findPeakElement(int nums[], int size) {
    if (nums[0] > nums[1]) return 0;
    if (nums[size - 1] > nums[size - 2]) return size - 1;
    for (int i = 1; i < size - 1; i++) {
        if (nums[i] > nums[i - 1] && nums[i] > nums[i + 1]) {
            return i;
        }
    }
    return -1;  
}
int main() {
    int nums[] = {1, 3, 20, 4, 1, 0};
    int size = sizeof(nums) / sizeof(nums[0]);
    int peakIndex = findPeakElement(nums, size);
    printf("Peak element is at index: %d\n", peakIndex);
    
    return 0;
}
