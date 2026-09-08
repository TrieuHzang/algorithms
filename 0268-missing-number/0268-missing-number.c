int missingNumber(int* nums, int numsSize) {
    int sum1 = 0;
    int sum2 = (numsSize * (numsSize+1))/2;
    int key;
    for(int i = 0; i < numsSize; i++){
        sum1 += nums[i];
    }
    return sum2 - sum1;
}