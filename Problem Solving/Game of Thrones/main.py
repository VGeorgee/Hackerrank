def gameOfThrones(s):
    chars = [0 for i in range(26)]
    odd = 0
    
    for i in range(len(s)):
        chars[ord(s[i]) - ord('a')] += 1

    for i in range(26):
        if(chars[i] % 2 > 0):
            odd += 1
            
    if odd <= 1:
        return "YES"
    return "NO"
