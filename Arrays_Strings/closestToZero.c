#include <stdio.h>

int findClosestNumber(int* nums, int numSize) {
    int distanceFromZero;
    if (nums[0] < 0) {
        distanceFromZero = nums[0] * -1;
    } else {
        distanceFromZero = nums[0];
    }
    for (int i = 1; i < numSize; i++) {
        if (nums[i] == 0 || distanceFromZero == 0) {
            return 0;
        }
        if (nums[i] > 0 && distanceFromZero > nums[i]) {
            distanceFromZero = nums[i];
        } else if (nums[i] < 0 && distanceFromZero > nums[i] * -1){
            distanceFromZero = nums[i] * -1;
        }
    }
    return distanceFromZero;
}