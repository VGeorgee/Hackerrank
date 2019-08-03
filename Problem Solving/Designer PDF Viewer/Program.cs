    static int designerPdfViewer(int[] h, string word) {
        int max = h[0];

        for(int i = 0; i < word.Length; i++)
            if(h[word[i] - 'a'] > max)
                max = h[word[i] - 'a'];
        
        return max * word.Length;
    }