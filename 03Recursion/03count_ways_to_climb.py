def count_ways_to_climb(n):

    if n <= 1:
        return 1
    else:
        return count_ways_to_climb(n - 1) + count_ways_to_climb(n - 2)


if __name__ == "__main__":
    n = int(input("Enter the n: "))
    result = count_ways_to_climb(n)
    print(f"Ways to climb stairs: {result}")
