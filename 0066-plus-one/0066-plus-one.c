/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    int *result = (int*)malloc(digitsSize *sizeof(int));
    for(int i = 0; i< digitsSize; i++){
        result[i] = digits[i];
    }
    for(int j=digitsSize-1; j>=0; j--){
        if(result[j] != 9){
            result[j]++;
            *returnSize = digitsSize;
            return result;
        }else{
        result[j] = 0;
        }
        
    }

    free(result);
    result = (int*)malloc((digitsSize+1)*sizeof(int));
    result[0] = 1;
    for(int k=1; k<=digitsSize;k++){
        result[k] = 0;
    }
    *returnSize = digitsSize + 1;
    return result;
}