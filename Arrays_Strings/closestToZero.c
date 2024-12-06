#include <stdio.h>

int findClosestNumber(int* nums, int numSize) {
    int distanceFromZero;
    int positiveNum;
    int modified = 0;
    for (int i = 0; i < numSize; i++) {
        if (nums[i] == 0) {
            return 0;
        }
        if (nums[i] < 0) {
            positiveNum = nums[i] * -1;
            modified = 1;
        } else {
            positiveNum = nums[i];
            modified = 0;
        }
        if (distanceFromZero > positiveNum) {
            distanceFromZero = positiveNum;
        }
    }
    if (modified) {
        return distanceFromZero * -1;
    }
    return distanceFromZero;
}