def find_season():
    month = int(input("Enter the month: "))

    if month < 1 or month > 12:
        print("Invalid month")
    elif month >= 3 and month <= 5:
        print("Season:Spring")
    elif month >= 6 and month <= 8:
        print("Season:Summer")
    elif month >= 9 and month <= 11:
        print("Season:Autumn")
    else:
        print("Season:Winter")


find_season()
