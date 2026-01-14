def bubble_sort(arr):
    n = len(arr)

    for i in range(n-1):
        swapped = False
        for j in range(n-1-i):
            if arr[j] > arr[j+1]:
                arr[j],arr[j+1] = arr[j+1],arr[j]
                swapped = True

        if not swapped:
            break

    return arr


if __name__ == "__main__":
    arr = [70,20,50,30,90,5,15]
    result = bubble_sort(arr)
    print("Array after applying bubble sort: ", result)

