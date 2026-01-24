def partition(arr, start, end):
    pos = start
    for i in range(start, end):
        if arr[i] <= arr[end]:
            arr[i], arr[pos] = arr[pos], arr[i]
            pos += 1

    arr[pos], arr[end] = arr[end], arr[pos]
    return pos


def quickSort(arr, start, end):

    if start >= end:
        return
    pivotIndex = partition(arr, start, end)
    quickSort(arr, start, pivotIndex - 1)
    quickSort(arr, pivotIndex + 1, end)


if __name__ == "__main__":
    arr = [10, 3, 4, 1, 5, 6, 3, 2, 11, 10]
    start = 0
    end = len(arr) - 1
    print(f"Array before sorting: {arr}")
    quickSort(arr, start, end)
    print(f"Array after sorting: {arr}")
