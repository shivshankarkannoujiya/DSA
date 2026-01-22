def two_sum(arr, target):
    low = 0
    high = len(arr) - 1

    while low < high:
        if arr[low] + arr[high] == target:
            return low, high
        elif arr[low] + arr[high] > target:
            high = high - 1
        else:
            low = low + 1

    return -1, -1


if __name__ == "__main__":
    arr = [20, 40, 50, 75, 120, 145, 200]
    target = int(input("Enter the target: "))
    result = two_sum(arr, target)
    print(result)
