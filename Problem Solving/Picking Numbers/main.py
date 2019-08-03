def pickingNumbers(a):
    max = 0
    t = [0 for i in range(100)]

    for i in range(len(a)):
        t[a[i]] += 1
    
    for i in range(99):
        if t[i] + t[i + 1] > max:
            max = t[i] + t[i + 1]

    return max
