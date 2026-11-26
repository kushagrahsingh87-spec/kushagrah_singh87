int* sortedSquares(int* nums, int numsSize, int* returnSize) {
    int *result = (int*)malloc(numsSize * sizeof(int));
    *returnSize = numsSize;
    int left = 0;
    int right = numsSize - 1;
    int k = numsSize - 1;
    while(left <= right) {
        if(abs(nums[left]) > abs(nums[right])) {
            result[k] = nums[left] * nums[left];
            left++;
        }
        else {
            result[k] = nums[right] * nums[right];
            right--;
        }
        k--;
    }
    return result;
}
