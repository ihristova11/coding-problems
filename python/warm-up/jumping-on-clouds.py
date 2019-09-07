def count_jumps(n, clouds):
    jumps = 0
    i = 0

    while i < n - 1:
        if i + 2 < n: 
            if clouds[i + 2] == 0:
                jumps += 1
                i += 2
            else:
                jumps += 1
                i += 1
        else:
            jumps += 1
            i += 1
   
    return jumps


n = int(input())
l = list(map(int, input().rstrip().split()))
print(count_jumps(n, l))
