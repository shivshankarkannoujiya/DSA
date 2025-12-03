
def linearSearch(arr, target):
    n = len(arr)
    for i in range(n):
        if arr[i] == target:
            return i
    return -1


arr = [1,10,23,30,40,56,90]
target = int(input("Enter the target: "))
ans_index = linearSearch(arr, target)

if ans_index:
    print(f"Target is present at index: {ans_index}")
else:
    print(f"Target is not present in array")    