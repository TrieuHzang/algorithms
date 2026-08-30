bool arrayStringsAreEqual(char** word1, int word1Size, char** word2, int word2Size) {
    int a,b = 0;
    int c,d = 0;
    for (;;) {
        if (a == word1Size && c == word2Size) {
            return true;
        }
        if (a == word1Size || c == word2Size) {
            return false;
        }
        if (word1[a][b] != word2[c][d]) {
            return false;
        }
        b++;
        d++;
        if (word1[a][b] == '\0') {
            a++;
            b = 0;
        }
        if (word2[c][d] == '\0') {
            c++;
            d = 0;
        }
    }
}