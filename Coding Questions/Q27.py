def calculate_price(n):
    str_N = str(n)
    product = 1
    
    for char in str_N:
        product *= int(char)
    return product

n = int(input("Enter the value of N: "))
price = calculate_price(n)

print(price)
