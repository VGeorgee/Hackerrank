def designerPdfViewer(h, word):
    nmax = h[0]

    for c in word:
        if h[ord(c) - ord('a')] > nmax:
            nmax = h[ord(c) - ord('a')]

    return nmax * len(word)
