int ndouble(int n){
    return n * 2;
}
int nplus(int n){
    return n + 1;
}

int (*func[])(int) = {&ndouble, &nplus};

int utopianTree(int n) {
    int tree = 1;
    for(int i = 0; i < n; i++)
        tree = func[i % 2](tree);
    return tree;
}