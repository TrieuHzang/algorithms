/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */

void backtrack(int k, int n, int start, int depth,
               int* path, int** result, int* returnSize,
               int* columnSizes) {
    if (depth == k) {
        if (n == 0) {
            result[*returnSize] = malloc(k * sizeof(int));

            for (int i = 0; i < k; i++) {
                result[*returnSize][i] = path[i];
            }

            columnSizes[*returnSize] = k;
            (*returnSize)++;
        }
        return;
    }

    for (int i = start; i <= 9; i++) {
        if (i > n)
            break;

        path[depth] = i;

        backtrack(k, n - i, i + 1, depth + 1,
                  path, result, returnSize, columnSizes);
    }
}

int** combinationSum3(int k, int n, int* returnSize,
                     int** returnColumnSizes) {
    *returnSize = 0;

    int** result = malloc(126 * sizeof(int*));
    *returnColumnSizes = malloc(126 * sizeof(int));

    int path[9];

    backtrack(k, n, 1, 0, path, result,
              returnSize, *returnColumnSizes);

    return result;
}