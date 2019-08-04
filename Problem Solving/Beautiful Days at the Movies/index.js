function reverse(n) {
    return (n + '').split('').reverse().join('')
}

function math(n) {
    return Math.abs(n - reverse(n));
}

function beautifulDays(i, j, k) {
    let n = 0;
    while (i <= j) 
        if (math(i++) % k == 0)
            n++;
    return n;
}
