    static int[] permutationEquation(int[] p) {
        int[] myarr = new int[p.length];

        for(int i = 0; i < p.length; i++){
            for(int j = 0; j < p.length; j++){
                if(p[j] == i + 1)
                for(int k = 0; k < p.length; k++){
                    if(p[k] == j + 1)
                        myarr[i] = k + 1;
                }
            }
        }
        return myarr;
    }
