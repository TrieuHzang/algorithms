bool rotateString(char* s, char* goal) {
    int n = strlen(s);
    int m = strlen(goal);
    if (n != m) {
        return false;
    }
    char* temp = malloc(2 * n + 1);
    strcpy(temp, s);
    strcat(temp, s);
    bool result = strstr(temp, goal) != NULL;
    free(temp);
    return result;
}