/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize) {
    int max = candies[0];
    for(int i = 0; i < candiesSize;i++){
        if(candies[i] > max){
            max = candies[i];
        }
    }
    bool *result = malloc(candiesSize * sizeof(bool));
    for(int j = 0; j < candiesSize; j++){
        result[j] = candies[j] + extraCandies >= max;
        }
    *returnSize = candiesSize;
    return result;

}