char* addBinary(char* a, char* b) {
    int i = strlen(a) - 1;
    int j = strlen(b) - 1;
    int maxLen = strlen(a) > strlen(b) ? strlen(a) : strlen(b);
    char* result = (char*)malloc((maxLen + 2) * sizeof(char));
    int k = maxLen;
    result[k + 1] = '\0';
    int carry = 0;
    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;
        if (i >= 0) {
            sum += a[i] - '0';
            i--;
        }
        if (j >= 0) {
            sum += b[j] - '0';
            j--;
        }
        result[k] = (sum % 2) + '0';
        carry = sum / 2;
        k--;
    }
    return result + k + 1;
}