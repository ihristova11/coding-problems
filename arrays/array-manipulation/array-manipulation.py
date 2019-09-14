def max_value(n, m, queries):
    arr = [0] * (n + 1)
    max = x = 0
    for q_ind in range(m):
            arr[queries[q_ind][0] - 1] += queries[q_ind][2]
            if queries[q_ind][1] <= len(arr): 
                arr[queries[q_ind][1]] -= queries[q_ind][2]
    for i in arr:
        x = x + i
        if max < x: 
            max = x
    return max


nm = input().split()
n = int(nm[0])

m = int(nm[1])

queries = []

for _ in range(m):
    queries.append(list(map(int, input().rstrip().split())))

print(max_value(n,m, queries))