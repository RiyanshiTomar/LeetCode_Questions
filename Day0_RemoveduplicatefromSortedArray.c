/*nt removeDuplicates(int* nums, int numsSize) {
    if(numsSize <= 2) return numsSize;
	//Implement the function here
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
    int count2 = 0;
    for(int p = 0,q=0; p < numsSize; ++p){
        if(freq[p] > 0){
            nums[q] = nums[p];
            q++;
            count2++;
           
        }
    // } printf("%d, ",count2);
    
    
    
    }

return count2;
    
}*/

int removeDuplicates(int* nums, int numsSize) {
    if (numsSize <= 2) return numsSize;

    int i = 2; // pointer to place the next allowed element
    for (int j = 2; j < numsSize; ++j) {
        if (nums[j] != nums[i - 2]) {
            nums[i] = nums[j];
            i++;
        }
    }

    return i;
}

