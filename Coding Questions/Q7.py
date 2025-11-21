def check_palindrome(num):
    original_num = num
    rev = 0
    
    while num > 0:
        r = num % 10
        rev = rev * 10 + r
        num = num // 10
    
    if original_num == rev:
        return "Palindrome"
    else:
        return "Not a Palindrome"

num = int(input("Enter a number: "))
result = check_palindrome(num)
print(result)
