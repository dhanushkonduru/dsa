def calculate_incremented_salary(salary, rating):
    if salary <= 0 or rating < 1 or rating > 5:
        return "Invalid Input"
    
    if 1 <= rating <= 3:
        incremented_salary = salary * 1.10  
    elif 3.1 <= rating <= 4:
        incremented_salary = salary * 1.25  
    elif 4.1 <= rating <= 5:
        incremented_salary = salary * 1.30  
    
    return round(incremented_salary)
try:
    salary = float(input("Enter the salary: "))
    rating = float(input("Enter the Performance appraisal rating: "))
    result = calculate_incremented_salary(salary, rating)
    print(result)
except ValueError:
    print("Invalid Input")
