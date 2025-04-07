int search(int* nums, int numsSize, int target) {
    for(int i = 0; i <= numsSize-1; ++i){
        if(target == nums[i]){
            return i;
        }
    }
    return -1;
}