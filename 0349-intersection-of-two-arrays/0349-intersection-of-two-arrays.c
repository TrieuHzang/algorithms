/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    int seen[1001] = {0};
    int* result = (int*)malloc(sizeof(int) * 1001);
    *returnSize = 0;
    for (int i = 0; i < nums1Size; i++) {
        seen[nums1[i]] = 1;
    }
    for (int i = 0; i < nums2Size; i++) {
        if (seen[nums2[i]] == 1) {
            result[*returnSize] = nums2[i];
            (*returnSize)++;
            seen[nums2[i]] = 0;
        }
    }
    return result;
}