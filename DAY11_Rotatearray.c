/*void rotate(int* nums, int numsSize, int k) {
      int temp[k];
    k = k % numsSize;
    for(int i = 0; i < k; ++i){
        temp[i] = nums[i];
    }
    for(int i = 0; i < numsSize-k; ++i){
        nums[i] = nums[i+k];
    }
    for(int i = 0; i < k; ++i){
        nums[numsSize-k+i] =  temp[i];
    }
}*/

void rotate(int* nums, int numsSize, int k) {
    k = k % numsSize;
    if (k == 0) return;

    int temp[k];
    for (int i = 0; i < k; ++i) {
        temp[i] = nums[numsSize - k + i];
    }
    for (int i = numsSize - 1; i >= k; --i) {
        nums[i] = nums[i - k];
    }
    for (int i = 0; i < k; ++i) {
        nums[i] = temp[i];
    }
}
