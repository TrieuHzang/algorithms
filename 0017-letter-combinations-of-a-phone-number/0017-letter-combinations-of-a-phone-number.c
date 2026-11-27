/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
void backtrack(char* digits, int index, int n,
               char* current, char** result, int* returnSize) {

    const char* mapping[] = {
        "", "", "abc", "def", "ghi",
        "jkl", "mno", "pqrs", "tuv", "wxyz"
    };
    if (index == n) {
        current[n] = '\0';

        result[*returnSize] = malloc((n + 1) * sizeof(char));
        strcpy(result[*returnSize], current);

        (*returnSize)++;
        return;
    }

    const char* letters = mapping[digits[index] - '0'];

    for (int i = 0; letters[i] != '\0'; i++) {
        current[index] = letters[i];

        backtrack(digits, index + 1, n,
                  current, result, returnSize);
    }
}

char** letterCombinations(char* digits, int* returnSize) {
    *returnSize = 0;
    int n = strlen(digits);

    if (n == 0)
        return NULL;

    int total = 1;

    for (int i = 0; i < n; i++) {
        if (digits[i] == '7' || digits[i] == '9')
            total *= 4;
        else
            total *= 3;
    }

    char** result = malloc(total * sizeof(char*));
    char* current = malloc((n + 1) * sizeof(char));

    backtrack(digits, 0, n, current, result, returnSize);

    free(current);

    return result;
}