char* gameOfThrones(char* s) {
    int chars[26] = {0}, odd = 0;
    for(int i = 0; s[i]; chars[s[i++] - 'a']++);
    for(int i = 0; i < 26; odd += chars[i++] % 2);
    return odd <= 1 ? "YES" : "NO";
}
