    static String gameOfThrones(String s) {
        int odd = 0;
        int[] chars = new int[26];
        for(int i = 0; i < s.length(); chars[s.charAt(i++) - 'a']++);
        for(int i = 0; i < 26; odd += chars[i++] % 2 > 0 ? 1 : 0);
        return odd <= 1 ? "YES" : "NO";
    }
