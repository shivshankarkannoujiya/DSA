def get_factorial(number):
    if number == 0 or number == 1:
        return 1
    else:
        return number * get_factorial(number - 1)


def find_factorial(n):
    result = 1
    if n == 0 or n == 1:
        return 1
    else:
        for i in range(2, n + 1):
            result = result * i

        return result


if __name__ == "__main__":
    number = int(input("Enter the number: "))
    result = get_factorial(number)
    print(f"Factorial of [ {number} ] is: {result}")
