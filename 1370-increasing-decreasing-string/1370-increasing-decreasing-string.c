char* sortString(char* s) {
    int count[26] = {0};
    int n = 0;

    while (s[n] != '\0') {
        count[s[n] - 'a']++;
        n++;
    }

    char* result = (char*)malloc((n + 1) * sizeof(char));
    int k = 0;

    while (k < n) {
        // smallest -> largest
        for (int i = 0; i < 26; i++) {
            if (count[i] > 0) {
                result[k++] = 'a' + i;
                count[i]--;
            }
        }
        for (int i = 25; i >= 0; i--) {
            if (count[i] > 0) {
                result[k++] = 'a' + i;
                count[i]--;
            }
        }
    }

    result[k] = '\0';

    return result;
}