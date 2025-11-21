def display_characters():
    n = int(input("Enter how many characters you need:"))
    digits = []
    for _ in range(n):
        digit = int(input("Enter a digit: "))
        digits.append(digit)

    print("\nASCII values:")
    for digit in digits:
        print(str(digit) + "=" + chr(digit))


display_characters()
