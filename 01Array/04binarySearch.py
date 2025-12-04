def binarySearch(arr, i, j, x):
    while i <= j:
        mid = i + (j - 1) // 2
        if arr[mid] == x:
            return mid
        elif x > arr[mid]:
            return binarySearch(arr, mid + 1, j, x)
        else:
            return binarySearch(arr, i, mid - 1, x)

    return -1


arr = [2, 5, 10, 14, 18, 20, 15, 50, 70]
i = 0
j = len(arr) - 1
x = int(input("ETNER TARGET VALUE: "))

ans_index = binarySearch(arr, i, j, x)
print(f"Searching element is found at index: {ans_index}")
