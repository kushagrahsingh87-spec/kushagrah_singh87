int smallestRangeI(int* nums, int numsSize, int k) {
    int max = nums[0];
    int min = nums[0];
    for(int i = 1; i < numsSize; i++) {
        if(nums[i] > max) {
            max = nums[i];
        }
        if(nums[i] < min) {
            min = nums[i];
        }
    }
    int result = max - min - 2 * k;
    if(result < 0) {
        result = 0;
    }
    return result;
}
