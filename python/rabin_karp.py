def strstr(s, x):
    # Rabin-Karp algorithm in python
    d = 256
    m = len(x)
    n = len(s)
    p = 0
    t = 0
    h = 1
    i = 0
    j = 0
    q = 13

    for i in range(m - 1):
        h = (h * d) % q

    # Calculate hash value for pattern and text
    for i in range(m):
        p = (d * p + ord(x[i])) % q
        t = (d * t + ord(s[i])) % q

    # Find the match
    for i in range(n - m + 1):
        if p == t:
            for j in range(m):
                if s[i + j] != x[j]:
                    break

            j += 1
            if j == m:
                return i

        if i < n - m:
            t = (d * (t - ord(s[i]) * h) + ord(s[i + m])) % q

            if t < 0:
                t = t + q
    else:
        return -1
