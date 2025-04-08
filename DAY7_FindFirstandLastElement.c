int* searchRange(int* nums, int numsSize, int target, int* returnSize) {
    static int a[2];
    a[0] = -1;
    a[1] = -1;
    *returnSize = 2;
    for(int i = 0; i <= numsSize-1; ++i){
        if(target == nums[i]){
            a[0] = i;
            while(i + 1 < numsSize && nums[i+1] == target){
                ++i;
            }
            a[1] = i;
            return a;
            }
        }
    

    return a;
    

}