# TODO: Linear Search
# TC: O(n), n: size of array
# SC: o(1)
def linearSearch(arr, target):
    for i in range(len(arr)):
        if arr[i] == target:
            return i
    return -1



# Driver code
arr = [2, 8, 9, 12, 11, 19]
target = 12

result = linearSearch(arr, target)

if(result != -1):
    print(f"Target element found at index: {result}")
else:
    print(f"Target element not found")    


ans = arr.pop(3)    
print(ans)