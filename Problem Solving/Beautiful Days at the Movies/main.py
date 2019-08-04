def beautifulDays(i, j, k):
    n = 0
    while i <= j:
        if abs(i - (int(str(i)[::-1]))) % k == 0:
            n += 1
        i += 1
    return n
