function designerPdfViewer(h, word) {
    let max = h[0];

    for (let i = 0; i < word.length; i++)
        if (h[word.charCodeAt(i) - 'a'.charCodeAt(0)] > max)
            max = h[word.charCodeAt(i) - 'a'.charCodeAt(0)];

    console.log(word.charCodeAt(0) - 'a'.charCodeAt(0))

    return max * word.length;
}

