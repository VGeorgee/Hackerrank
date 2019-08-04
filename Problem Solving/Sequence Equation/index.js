function permutationEquation(p) {
    let myarr = []
    for (let i = 0; i < p.length; i++) {
        for (let j = 0; j < p.length; j++) {
            if (p[j] == i + 1)
                for (let k = 0; k < p.length; k++) {
                    if (p[k] == j + 1)
                        myarr[i] = k + 1;
                }
        }
    }
    return myarr;
}
