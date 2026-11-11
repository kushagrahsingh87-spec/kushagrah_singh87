int findGCD(int* nums, int numsSize) {
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
    while(max % min != 0) {
        int rem = max % min;
        max = min;
        min = rem;
    }
    return min;
}
