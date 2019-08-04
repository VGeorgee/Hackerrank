    static int rev(int n){
        return Integer.parseInt(new StringBuilder(n + "").reverse().toString());
    }

    static int math(int n){
        return Math.abs(n - rev(n));
    }

    static int beautifulDays(int i, int j, int k) {
        int n = 0;
        while(i <= j)
            if(math(i++) % k == 0)
                n++;
        return n;
    }
