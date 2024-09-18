#include <stdio.h>

int findClosestNumber(int* nums, int numSize) {
    int closestToZero[numSize];
    int lenNow = 0;
    int distanceFromZero;
    int distanceNow;
    for (int i = 0; i < numSize; i++) {
        if (nums[i] == 0) {
            return nums[i];
        }
        if (nums[i] < 0) {
            distanceNow = nums[i] * -1;
            if (distanceNow < distanceFromZero) {
                distanceFromZero = distanceNow;
            }
        } else if (nums[i] > 0) {

        }
    }
}