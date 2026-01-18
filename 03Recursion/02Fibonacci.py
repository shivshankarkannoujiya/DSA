def fibonacci_series(n):
    if n <= 1:
        return n
    else:
        return fibonacci_series(n - 1) + fibonacci_series(n - 2)


if __name__ == "__main__":
    n = int(input("Enter the n: "))

    for i in range(n):
        print(fibonacci_series(i))
