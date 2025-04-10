#include <stdio.h>
#include <stdbool.h>

bool search(int* nums, int numsSize, int target) {
    for(int i = 0; i <= numsSize -1; ++i){
        if(target == nums[i]){
            return true;
        }
    }
    return false;
}