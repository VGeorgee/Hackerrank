    static int[] permutationEquation(int[] p) {
        int[] myarr = new int[p.Length];

        for(int i = 0; i < p.Length; i++){
            for(int j = 0; j < p.Length; j++){
                if(p[j] == i + 1)
                for(int k = 0; k < p.Length; k++){
                    if(p[k] == j + 1)
                        myarr[i] = k + 1;
                }
            }
        }
        return myarr;
    }
