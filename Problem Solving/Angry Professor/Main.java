    static String angryProfessor(int k, int[] a) {
        for(int i = 0; i < a.length; k -= (a[i++] <= 0) ? 1 : 0);
        return k <= 0 ? "NO" : "YES";
    }
