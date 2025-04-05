double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    
    for(int i = 0; i <= nums1Size-1; ++i){
        scanf("%d ", &nums1[i]);
    }
     for(int i = 0; i <= nums2Size-1; ++i){
        scanf("%d ", &nums2[i]);
    }
    int nums3[nums1Size + nums2Size];

    for(int i = 0; i <= nums1Size-1; ++i){
        nums3[i] = nums1[i];
    }
    for(int i = 0; i <= nums2Size-1; ++i){
        nums3[nums1Size+i] = nums2[i];
    }
    
    for(int i = 0; i <= nums1Size+nums2Size-2; ++i){
        int min_index = i;
        for(int j = i+1; j <=  nums1Size+nums2Size-1; ++j){
            if(nums3[j] < nums3[min_index]){
                min_index = j;
            }
        }
        int temp = nums3[i];
        nums3[i] = nums3[min_index];
        nums3[min_index] = temp;
    }
    int nums3Size = nums1Size + nums2Size;
    //means we have sorted our array like that.....it is come like 1, 2, 3
    //now lets print median
    double median;
    if((nums3Size) % 2 == 0){
        median = (nums3[nums3Size/2 - 1] + nums3[nums3Size/2]) / 2.0;
    }
    else{
        median = nums3[nums3Size/2];
    }
    return median;
    
}