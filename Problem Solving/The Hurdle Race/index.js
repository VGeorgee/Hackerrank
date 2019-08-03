function hurdleRace(k, height) {
    let max = height[0];

    for (let i = 1; i < height.length; i++)
        if (height[i] > max)
            max = height[i];

    return k > max ? 0 : max - k;
}
