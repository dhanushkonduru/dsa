def calculate_daily_income():
    fees = { 'below_17': 200, 'between_17_40': 400, 'above_40': 300 }
    ages = []
    total_income = 0

    print("Enter age value (press Enter without a value to stop):")

    while True:
        age_input = input()
        if age_input == "":
            break

        try:
            age = int(age_input)
            if age <= 0 or age > 120:
                print("INVALID INPUT")
                return
            ages.append(age)
            if len(ages) > 20:
                print("INVALID INPUT")
                return
        except ValueError:
            print("INVALID INPUT")
            return

    for age in ages:
        if age < 17:
            total_income += fees['below_17']
        elif 17 <= age <= 40:
            total_income += fees['between_17_40']
        else:
            total_income += fees['above_40']

    print(f"Total Income {total_income} INR")

calculate_daily_income()