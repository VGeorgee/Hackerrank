let ndouble = function (n) {
    return n * 2
}

let nplus = function (n) {
    return n + 1
}

let func = [ndouble, nplus]

function utopianTree(n) {
    let tree = 1
    for (let i = 0; i < n; i++)
        tree = func[i % 2](tree)
    return tree
}
