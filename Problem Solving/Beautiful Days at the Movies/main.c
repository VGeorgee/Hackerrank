int abs(int n){
    return n >= 0 ? n : -n;
}

int reverse(int n) {
    int i, j = 0;
    char str[20], rev[20];
    sprintf(str, "%d", n);
    for(i = strlen(str) - 1; i >= 0; rev[j++] = str[i--]); 
    rev[j] = 0;

    return atoi(rev);
}

int math(int n) {
    return abs(n - reverse(n));
}

int beautifulDays(int i, int j, int k) {
    int n = 0;
    while (i <= j) 
        if (math(i++) % k == 0)
            n++;
    return n;
}
