def hurdleRace(k, height): 
    nmax = height[0]

    for n in height:
        if n > nmax:
            nmax = n

    if k > nmax:
        return 0

    return nmax - k