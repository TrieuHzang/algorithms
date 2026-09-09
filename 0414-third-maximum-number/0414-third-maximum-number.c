int compare(const void* a, const void* b) {
    int x = *(const int*)a;
    int y = *(const int*)b;

    if (x < y) return 1;
    if (x > y) return -1;
    return 0;
}
int thirdMax(int* nums, int numsSize) {
    qsort(nums, numsSize, sizeof(int), compare);
    int count = 1;
    for(int i = 1; i < numsSize; i++){
        if(nums[i] != nums[i-1]){
            count++;
        }
        if(count == 3){
            return nums[i];
        }
    }
    return nums[0];
}