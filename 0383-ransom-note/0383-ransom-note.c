bool canConstruct(char* ransomNote, char* magazine) {
    int k = strlen(ransomNote);
    int l = strlen(magazine);
    for(int i = 0; i < k; i++){
        int f = 0;
        int j=0;
        while(j<l){
        if(ransomNote[i] == magazine[j]){
            f = 1;
            magazine[j] = '@';
            break;
        }
        j++;
        }
    if(f == 0){
        return false;
    }
    }
    return true;
}