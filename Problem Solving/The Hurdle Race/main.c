int hurdleRace(int k, int height_count, int* height) {
    int max = height[0];

    for(int i = 1; i < height_count-1; i++)
        if(height[i] > max)
            max = height[i];

    return k > max ? 0 : max - k;
}