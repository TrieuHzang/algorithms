double findMaxAverage(int* nums, int numsSize, int k) {
    int sum = 0;
    for(int i = 0; i< k; i++){
        sum += nums[i];
    }
    int max = sum;
    for(int j = k; j < numsSize; j++){
        sum = sum - nums[j-k] + nums[j];
        if(max < sum){
        max = sum;
        }
    }
    return (double)max/k;
}