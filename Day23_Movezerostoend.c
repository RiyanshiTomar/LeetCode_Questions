void moveZeroes(int* nums, int numsSize) {
    int j = 0; 

   // Move all non-zero elements forward
   for (int i = 0; i < numsSize; i++) {
       if (nums[i] != 0) {
           nums[j] = nums[i];
           j++; 
       }
   }
   while(j < numsSize){
       nums[j] = 0;
       j++;
   }
}