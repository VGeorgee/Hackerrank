int* permutationEquation(int p_count, int* p, int* result_count) {
    int *myarr = malloc(p_count * sizeof(int));

    for(int i = 0; i < p_count; i++){
        for(int j = 0; j < p_count; j++){
            if(p[j] == i + 1)
            for(int k = 0; k < p_count; k++){
                if(p[k] == j + 1)
                    myarr[i] = k + 1;
            }
        }
    }
    *result_count = p_count;
    return myarr;
}
