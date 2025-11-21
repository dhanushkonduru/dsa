def calculate_imbalance(i):
    count_star = 0
    count_hash = 0
    
    for char in i:
        if char == '*':
            count_star += 1
        elif char == '#':
            count_hash += 1
    
    difference = count_star - count_hash
    return difference

i = input("Enter the string consisting of '*' and '#': ")
result = calculate_imbalance(i)

if result == 0:
    print("0 → number of * and # are equal")
elif result > 0:
    print(f"{result} → number of * are greater than #")
else:
    print(f"{result} → number of # are greater than *")
