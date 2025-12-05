def searchInMatrix(matrix, target):
    rows = len(matrix)
    if rows == 0:
        return False
    
    cols = len(matrix[0])

    low, high = 0, (rows * cols) - 1
    
    while low <= high:
        mid = low + (high - low)//2
        mid_element = matrix[mid//cols][mid%cols]

        if mid_element == target:
            return True
        elif mid_element < target:
            low = mid + 1
        else:
            high = mid - 1
    return False            


# Driver code
matrix = [[1, 3, 5, 7], [10, 11, 16, 20], [23, 30, 34, 60]]
target = int(input("ENTER TARGET VALUE: "))

isPresent = searchInMatrix(matrix, target)
print(f"IS TARGET PRESENT: {isPresent}")

