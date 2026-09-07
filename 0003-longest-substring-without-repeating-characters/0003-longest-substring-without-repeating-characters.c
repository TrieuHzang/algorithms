int lengthOfLongestSubstring(char* s) {
    int count[256] = {0};
    int left = 0;
    int right = 0;
    int max= 0;
    for(right = 0; s[right] != '\0'; right++){
        unsigned char x = s[right];
        count[x]++;
        while(count[x]>1){
            count[(unsigned char)s[left]]--;
            left++;
        }
        int len = right - left + 1;
        if(len > max){
            max = len;
        }
    }
    return max;
}