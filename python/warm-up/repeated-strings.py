def find_repetitions(s, n):
    l = list(s)
    a_count = 0
    repetitions = 0
    for i in l:
        if i == 'a':
            a_count += 1
    repetitions += a_count * (n // len(s))
    left = n % len(s)
    for k in range(left):
        if s[k] == 'a':
            repetitions += 1
    return repetitions


s = input()
n = int(input())
print(find_repetitions(s, n))
