function angryProfessor(k, a) {
    for (let i = 0; i < a.length; k -= (a[i++] <= 0) ? 1 : 0);
    return k <= 0 ? 'NO' : 'YES';
}
