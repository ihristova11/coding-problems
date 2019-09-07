def find_socks(arr):
    socks = {}
    count = 0

    for i in arr:
        if i in socks:
            socks[i] += 1
        else:
            socks[i] = 1

    for i in socks:
        if socks[i] // 2 >= 1:
            count += socks[i] // 2

    return count


n = int(input())
ar = list(map(int, input().rstrip().split()))
print(find_socks(ar))
