def findPower(a, n):
    if n == 1:
        return a
    else:
        mid = n // 2
        left = findPower(a, mid)
        result = left * left
        if n % 2 == 0:
            return result
        else:
            return result * a


if __name__ == "__main__":
    a = int(input("Enter value of a: "))
    n = int(input("Enter value of n: "))
    result = findPower(a, n)
    print(f"a^n is: {result} ")
