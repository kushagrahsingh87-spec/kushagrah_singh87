int missingNumber(int* nums, int numsSize) {
    int sum = numsSize * (numsSize + 1) / 2;
    int miss = 0;
    for(int i = 0; i < numsSize; i++) {
        miss = nums[i] + miss;
    }
    return sum - miss;
}
