#include <stdio.h>

int findClosestNumber(int* nums, int numSize) {
    signed int distanceFromZero;
    signed int numNow = nums[0];
    if (numNow < 0) {
        distanceFromZero = numNow * -1;
    } else {
        distanceFromZero = numNow;
    }
    for (int i = 1; i < numSize; i++) {
        if (nums[i] == 0 || numNow == 0) {
            return 0;
        }
        if (numNow < 0) {
            if (nums[i] > 0 && distanceFromZero > nums[i]) {
                distanceFromZero = nums[i];
                numNow = nums[i];
            } else if (nums[i] < 0 && nums[i] > numNow && distanceFromZero > nums[i] * -1) {
                distanceFromZero = nums[i] * -1;
                numNow = nums[i];
            }
        } else if (numNow > 0) {
            
        }
    }
}