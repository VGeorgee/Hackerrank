int* cutTheSticks(int arr_count, int* arr, int* result_count) {
    int types[1001] = { 0 }, myarr[1001] = { 0 }, i, k, sum = 0;
    for(i = 0; i < arr_count; types[arr[i++]]++);
    for(i = k = 0; i < 1001; i++){
        if(types[i]){
            myarr[k++] = types[i];
            sum += types[i];
        }
    }
    int *ret = malloc(sizeof(int) * (k + 1));
    ret[0] = sum;
    for(i = 0; i < k; i++){
        ret[i + 1] = ret[i] - myarr[i];
    }
    *result_count = k;
    return ret;
}
