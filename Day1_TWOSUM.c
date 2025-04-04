int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    for(int i = 0; i <= numsSize-1; ++i){
        for(int j = i+1; j <= numsSize-1; ++j){
            if(nums[i] + nums[j] == target){
                int *result = (int*)malloc(2*sizeof(int));
                result[0] = i;
                result[1] = j;
                *returnSize = 2;
                return result;
            }
        }
        
    }
    *returnSize = 0;
    return 0;     //NULL hoga yhan 0 ki jagah........
    
}

//here we dont need to write main function....only by this function