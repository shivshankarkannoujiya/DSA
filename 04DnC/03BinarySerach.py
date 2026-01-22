def binary_search(arr, low, high, target):
    while low <= high:
        mid = low + (high - low) // 2
        if arr[mid] == target:
            return mid
        elif arr[mid] < target:
            low = mid + 1
        else:
            high = mid - 1
    return -1


# Recursion with loop: Not a good choice
def recursive_binary_serach(arr, low, high, target):
    while low <= high:
        mid = low + (high - low) // 2
        if arr[mid] == target:
            return mid
        elif arr[mid] < target:
            return recursive_binary_serach(arr, mid + 1, high, target)
        else:
            return recursive_binary_serach(arr, low, mid - 1, target)
    return -1


def recursive_binary_search_better(arr, low, high, target):

    # Base case
    if low > high:
        return -1

    mid = low + (high - low) // 2
    if arr[mid] == target:
        return mid
    elif arr[mid] < target:
        return recursive_binary_search_better(arr, mid + 1, high, target)
    else:
        return recursive_binary_search_better(arr, low, mid - 1, target)


if __name__ == "__main__":
    arr = [2, 5, 10, 14, 18, 22, 27, 35, 90]
    target = int(input("Enter target value: "))
    low = 0
    high = len(arr) - 1
    result = recursive_binary_search_better(arr, low, high, target)
    print(f"Target element is present at index: {result}")
