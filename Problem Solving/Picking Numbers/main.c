int pickingNumbers(int a_count, int* a) {
    int i, max, t[100] = {0};

    for(i = 0; i < a_count; t[a[i++]]++);

    for(max = i = 0; i < 99; i++)
        if(t[i] + t[i+1] > max)
            max = t[i] + t[i+1];

    return max;
}
