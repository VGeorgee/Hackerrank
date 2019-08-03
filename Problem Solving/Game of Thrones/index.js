function gameOfThrones(s) {
    let odd = 0;
    let chars = [];
    for (let i = 0; i < 26; chars[i++] = 0);
    for (let i = 0; i < s.length; chars[s.charCodeAt(i++) - 'a'.charCodeAt(0)]++);
    for (let i = 0; i < 26; odd += chars[i++] % 2 > 0 ? 1 : 0);
    return odd <= 1 ? "YES" : "NO";
}
