function pickingNumbers(a) {
    let i, max = 0, t = []
    for (i = 0; i < 100; t[i++] = 0);

    for (i = 0; i < a.length; t[a[i++]]++);
    
    for (max = i = 0; i < 99; i++) { 
        if (t[i] + t[i + 1] > max)
            max = t[i] + t[i + 1];
    }

    return max;
}
