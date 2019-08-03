int designerPdfViewer(int h_count, int* h, char* word) {
    int max = h[0], strl;
    for(strl = 0; word[strl]; strl++)
        if(h[word[strl] - 'a'] > max)
            max = h[word[strl] - 'a'];

    return max * strl;
}
