/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize) {
        for (int i = 0; i < numsSize; i++)
    {
        int x = abs(nums[i]);
        if (nums[x - 1] > 0)
        {
            nums[x - 1] = -nums[x - 1];
        }
    }
    int* result = (int*)malloc(numsSize * sizeof(int));
    *returnSize = 0;
    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] > 0)
        {
            result[*returnSize] = i + 1;
            (*returnSize)++;
        }
    }
    return result;
}