# Minimum Swaps 2 - Analysis

## Algorithm
input: `arr`

1. create an `index` array to store the indeces of the numbers
2. check if `arr[i]` = `i + 1`
3. if not => store the number on that position `t = arr[i]`
4. update the value of `arr[i] = i + 1`
5. get the index of number `i + 1` by `index[i + 1]`
6. `arr[temp[i + 1]] = t`
7. set the new index of `t` in `index`: `index[t] = temp[i + 1]`
