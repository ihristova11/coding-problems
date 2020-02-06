import sys

def find_max_sum(arr, n):
    max_sum = -sys.maxsize -1
    temp = 0

    for i in range(0, n - 2):
        for j in range(0, n - 2):
            temp = sum_hourglass(i, j, arr)
            if max_sum < temp:
                max_sum = temp
    return max_sum


def sum_hourglass(x, y, arr):
    sum = 0
    for i in range(3):
        sum += arr[x][y + i]
        sum += arr[x + 2][y + i]
    sum += arr[x + 1][y + 1]

    return sum


arr = []
n = 6
for _ in range(6):
    arr.append(list(map(int, input().rstrip().split())))

print(find_max_sum(arr, n))