    static int utopianTree(int n) {
        int tree = 1;
        for(int i = 0; i < n; i++)
            if(i % 2 == 1)
                tree += 1;
            else
                tree *= 2;
        return tree;
    }