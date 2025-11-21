def check_lucky_number(car_number):
    if not car_number.isdigit() or len(car_number) != 4:
        return "Invalid car number"
    
    num = int(car_number)
    
    sum_of_digits = sum(int(digit) for digit in car_number)
    
    if sum_of_digits % 3 == 0 or sum_of_digits % 5 == 0 or sum_of_digits % 7 == 0:
        return "Lucky Number"
    else:
        return "Sorry its not my lucky number"

car_number = input("Enter the car no: ")
result = check_lucky_number(car_number)
print(result)
