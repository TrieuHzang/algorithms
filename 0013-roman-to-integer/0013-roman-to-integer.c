int romanToInt(char* s) {
    int i = 0;
    int sum = 0;
    while (s[i] != '\0') {
        int x = 0;
        int y = 0;
        switch (s[i]) {
            case 'I': x = 1; break;
            case 'V': x = 5; break;
            case 'X': x = 10; break;
            case 'L': x = 50; break;
            case 'C': x = 100; break;
            case 'D': x = 500; break;
            case 'M': x = 1000; break;
        }
        switch (s[i + 1]) {
            case 'I': y = 1; break;
            case 'V': y = 5; break;
            case 'X': y = 10; break;
            case 'L': y = 50; break;
            case 'C': y = 100; break;
            case 'D': y = 500; break;
            case 'M': y = 1000; break;
        }
        if (x < y) {
            sum -= x;
        } else {
            sum += x;
        }
        i++;
    }
    return sum;
}