def permutationEquation(p):
    myarr = []
    for i in range(len(p)):
        for j in range(len(p)):
            if p[j] == i + 1:
                for k in range(len(p)):
                    if p[k] == j + 1:
                        myarr.append(k + 1)
    return myarr;
