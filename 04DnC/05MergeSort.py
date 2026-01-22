def merge_procedure(arr, low, mid, high):

    elements_in_left_subarray = mid - low + 1
    elements_in_right_subarray = high - mid

    # copy elements form the array to subarray
    leftSubArray = [0] * elements_in_left_subarray
    rightSubArray = [0] * elements_in_right_subarray

    for i in range(elements_in_left_subarray):
        leftSubArray[i] = arr[low + i]

    for i in range(elements_in_right_subarray):
        rightSubArray[i] = arr[mid + 1 + i]

    i = 0
    j = 0
    k = low

    while i < elements_in_left_subarray and j < elements_in_right_subarray:
        if leftSubArray[i] <= rightSubArray[j]:
            arr[k] = leftSubArray[i]
            i += 1

        else:
            arr[k] = rightSubArray[j]
            j += 1

        k += 1

    # if anyone side array is exhausted: copy the entire elements from the particular arr
    # from left_sub_array
    while i < elements_in_left_subarray:
        arr[k] = leftSubArray[i]
        i += 1
        k += 1

    # from right_sub_array
    while j < elements_in_right_subarray:
        arr[k] = rightSubArray[j]
        j += 1
        k += 1


def merge_sort(arr, low, high):
    if low < high:
        mid = low + (high - low) // 2
        merge_sort(arr, low, mid)
        merge_sort(arr, mid + 1, high)

        merge_procedure(arr, low, mid, high)

    return arr


if __name__ == "__main__":
    arr = [50, 70, 65, 13, 80, 62, 98, 27]
    low = 0
    high = len(arr) - 1
    result = merge_sort(arr, low, high)
    print(f"Sorted array after applying merge sort: {result}")
