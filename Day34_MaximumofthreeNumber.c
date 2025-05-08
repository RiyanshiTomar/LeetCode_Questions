#include <stdlib.h>
#include <math.h>
#include <limits.h>
int maximumProduct(int* nums, int numsSize) {
    /*for(int i = 0; i <= numsSize-2; ++i){
        int min_index = i;
        for(int j = i+1; j <= numsSize-1; ++j){
            if(nums[j] < nums[min_index]){
                min_index = j;
            }
        }
        int temp = nums[i];
        nums[i] = nums[min_index];
        nums[min_index] = temp;
    }
    int prod1 = nums[numsSize-1] * nums[numsSize-2] * nums[numsSize-3];
    int prod2 = nums[0] * nums[1] * nums[numsSize-1];
    
    return prod1 > prod2 ? prod1 : prod2;*/
    int max1 = INT_MIN, max2 = INT_MIN, max3 = INT_MIN;
    int min1 = INT_MAX, min2 = INT_MAX;

    for (int i = 0; i < numsSize; ++i) {
        int n = nums[i];

        // Track max1 > max2 > max3
        if (n > max1) {
            max3 = max2;
            max2 = max1;
            max1 = n;
        } else if (n > max2) {
            max3 = max2;
            max2 = n;
        } else if (n > max3) {
            max3 = n;
        }

        // Track min1 < min2
        if (n < min1) {
            min2 = min1;
            min1 = n;
        } else if (n < min2) {
            min2 = n;
        }
    }

    int prod1 = max1 * max2 * max3;
    int prod2 = min1 * min2 * max1;

    return prod1 > prod2 ? prod1 : prod2;


}