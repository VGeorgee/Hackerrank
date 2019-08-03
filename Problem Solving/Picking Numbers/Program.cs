    public static int pickingNumbers(List<int> a)
    {
        int i, max;
        int[] t = new int[100];

        for(i = 0; i < a.Count;  t[a[i++]]++);

        for(max = i = 0; i < 99; i++)
            if(t[i] + t[i+1] > max)
                max = t[i] + t[i+1];

        return max;
    }
