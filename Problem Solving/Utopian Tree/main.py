def utopianTree(n):
    tree = 1
    for i in range(n):
        if i % 2 == 1:
            tree += 1
        else:
            tree *= 2
    return tree