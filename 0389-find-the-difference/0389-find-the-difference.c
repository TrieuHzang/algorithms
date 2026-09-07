char findTheDifference(char* s, char* t) {
    int len1 = strlen(s);
    int len2 = strlen(t);
    int temp[1000] = {0};

    for(int i = 0; i < len2; i++){
        int found = 0;
        for(int j = 0; j< len1; j++){
            if(s[j] == t[i] && temp[j] == 0){
                found = 1;
                temp[j] = 1;
                break;
            }
        }
        if(found == 0){
            return t[i];
        }
    }
    return '\0';
}