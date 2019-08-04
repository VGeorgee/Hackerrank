    static int Reverse(int n){
        string ns = n + "";
        string reversed = "";
        for(int i = ns.Length - 1; i >= 0; i--) reversed += ns[i];
        return Convert.ToInt32(reversed);
    }

    static int math(int n){
        return Math.Abs(n - Reverse(n));
    }

    static int beautifulDays(int i, int j, int k) {
        int n = 0;
        while(i <= j)
            if(math(i++) % k == 0)
                n++;
        return n;
    }
