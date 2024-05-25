def last_digit_of_factorial(a, b):
    if a > b:
        return 0

    last_digit = 1

    for i in range(a + 1, min(b, a + 10) + 1):
        last_digit *= i % 10

    if b - a > 10:
        cycle = [2, 4, 8, 6]
        last_digit *= cycle[(b - a - 1) % 4]

    return last_digit % 10

a, b = map(int, input().split())
result = last_digit_of_factorial(a, b)
print(result)