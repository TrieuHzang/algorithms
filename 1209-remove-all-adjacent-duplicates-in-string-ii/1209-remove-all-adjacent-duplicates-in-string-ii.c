
char* removeDuplicates(char* s, int k) {
    int n = strlen(s);
    char* stackChar = (char*)malloc(n * sizeof(char));
    int* stackCount = (int*)malloc(n * sizeof(int));
    int top = -1;
    for (int i = 0; i < n; i++) {
        if (top >= 0 && stackChar[top] == s[i]) {
            stackCount[top]++;

            if (stackCount[top] == k) {
                top--;
            }
        }
        else {
            top++;
            stackChar[top] = s[i];
            stackCount[top] = 1;
        }
    }
    char* result = (char*)malloc((n + 1) * sizeof(char));
    int pos = 0;
    for (int i = 0; i <= top; i++) {
        for (int j = 0; j < stackCount[i]; j++) {
            result[pos++] = stackChar[i];
        }
    }
    result[pos] = '\0';
    free(stackChar);
    free(stackCount);
    return result;
}