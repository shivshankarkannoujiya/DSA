def ternarySearch(arr, target):
    low = 0
    high = len(arr) - 1

    while low <= high:
        mid1 = low + (high - low) // 3
        mid2 = high - (high - low) // 3

        if arr[mid1] == target:
            return mid1
        elif arr[mid2] == target:
            return mid2
        elif target < arr[mid1]:
            high = mid1 - 1
        elif target > arr[mid2]:
            low = mid2 + 1
        else:
            low = mid1 + 1
            high = mid2 - 1
    return -1


arr = [10,20,30,40,50,60,70,80,90]
target = int(input("ENTER TARGET VALUE: "))

ans_index = ternarySearch(arr, target)

if ans_index != -1:
    print(f"TARGET ELEMENT FOUND AT INDEX: {ans_index}")
else:
    print(f"TARGET ELEMENT NOT FOUND")