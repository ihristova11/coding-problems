def count_valleys(arr):
    lvl = 0
    valley_num = 0
    for i in arr:
        if i == 'U':
            lvl += 1
        else:
            lvl -= 1

        if lvl == 0 and i == 'U':
            valley_num += 1
    return valley_num


n = int(input())
l = list(input())
print(count_valleys(l))
