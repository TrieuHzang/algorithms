bool isValid(char* s) {
    int length = strlen(s);
    char st[length];
    int a = -1;

    for(int i = 0; i < length; i++){
        if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
            ++a;
            st[a] = s[i];
        }
        else{
            if(a == -1){
                return false;
            }
            if(s[i] == ')' && st[a] != '('){
                return false;
            }
            if(s[i] == ']' && st[a] != '['){
                return false;
            }
            if(s[i] == '}' && st[a] != '{'){
                return false;
            }
            a--;
        }
    }
   if (a == -1) {
    return true;
   }
   else{
    return false;
   }
}