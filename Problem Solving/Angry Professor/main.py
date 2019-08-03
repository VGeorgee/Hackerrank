def angryProfessor(k, a):
    for i in range(len(a)):
        if a[i] <= 0:
            k -= 1
    if k <= 0:
        return "NO"
    return "YES"
 