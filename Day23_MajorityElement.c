int majorityElement(int* nums, int numsSize) {
    int freq[numsSize];
   for(int i = 0; i <= numsSize-1; ++i){
       freq[i] = 0;
   }
   for(int i = 0; i <= numsSize-1; ++i){
        int count = 1;
       if(freq[i] != -1){
          
           for(int j = i+1; j <numsSize; ++j){
               if(nums[i] == nums[j]){
               freq[j] = -1;
               count++;
           }
       }
           
       freq[i] = count;
   }
   }
   int flag = 0;
   int i;
   for(i = 0; i <= numsSize-1; ++i){
       if(freq[i] > numsSize/2){
           flag = 1;
           break;
       }
     
       
   }
   if(flag){
       return nums[i];
   }
   return nums[i];
}



