def shift_array(arr, n, d):
    if n < d:
        d = d % n
    new_ar = arr.copy()

    for i in range(len(arr)):
        if i - d < 0:
            new_ar[len(arr) + (i-d)] = arr[i]
        else:
            new_ar[i - d] = arr[i]
    return new_ar


nd = input().split()

n = int(nd[0])

d = int(nd[1])

a = list(map(int, input().rstrip().split()))

print(shift_array(a, n, d))
