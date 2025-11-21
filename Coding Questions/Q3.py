def get_valid_integer(prompt):
    while True:
        try:
            value = float(input(prompt))
            if value.is_integer() and value >= 0:
                return int(value)
            else:
                print("Enter value in integer")
        except ValueError:
            print("Enter a valid number")


def find_highest_placement():
    cse = get_valid_integer("Enter the no of students placed in CSE: ")
    aiml = get_valid_integer("Enter the no of students placed in AIML: ")
    ece = get_valid_integer("Enter the no of students placed in ECE: ")

    placements = {"CSE": cse, "AIML": aiml, "ECE": ece}
    max_placements = max(placements.values())

    if list(placements.values()).count(max_placements) == len(placements):
        print("None of the department has got the highest placement")
    else:
        print("Highest placement")
        for department, count in placements.items():
            if count == max_placements:
                print(department)


find_highest_placement()
