def get_maxima_minima(arr, low, high):

    # Base case: single element
    if low == high:
        return arr[low], arr[low]  # (min, max)

    # Base case: two elements
    if low == high - 1:
        if arr[low] < arr[high]:
            return arr[low], arr[high]
        else:
            return arr[high], arr[low]

    # Divide
    mid = low + (high - low) // 2

    min_l, max_l = get_maxima_minima(arr, low, mid)
    min_r, max_r = get_maxima_minima(arr, mid + 1, high)

    # Conquer
    return min(min_l, min_r), max(max_l, max_r)


if __name__ == "__main__":
    arr = [10, 70, 45, 16, 29, 30, 35, 20]
    min_val, max_val = get_maxima_minima(arr, 0, len(arr) - 1)
    print(f"Maximum and Minimum elements in array: {max_val}, {min_val}")
